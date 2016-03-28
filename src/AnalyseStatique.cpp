/*************************************************************************
                           AnalyseStatique  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <AnalyseStatique> (fichier AnalyseStatique.cpp) --
#include <iostream>
using namespace std;

#include <list>

#include "AnalyseStatique.h"
//Si l'enum e_symbole n'est pas visible
// #include "Symbole.h"

//----------------------------------------------------------------- PUBLIC
AnalyseStatique::AnalyseStatique (P * programme)
{
#ifdef MAP
  cout << "Appel au constructeur de <AnalyseStatique>" << endl;
#endif

  erreurStatique = false;
  initTableStatique(*programme);
  traiterInstructions(*programme);
} //----- Fin de AnalyseStatique

AnalyseStatique::~AnalyseStatique ( )
{
#ifdef MAP
  cout << "Appel au destructeur de <AnalyseStatique>" << endl;
#endif
} //----- Fin de ~AnalyseStatique

int AnalyseStatique::verifierTableStatique()
{
  map<string, EtatIdStatique*>::iterator it;

  for (it = tableStatique.begin(); it != tableStatique.end(); ++it)
  {
    if(!it->second->estAffecte())
    {
      throw string("Erreur : L'identifiant " + it->first + "n'a jamais été affecté");
      erreurStatique = true;
    }

    if(!it->second->estUtilise())
    {
      throw string("Erreur : L'identifiant " + it->first + "n'a jamais été utilisé");
      erreurStatique = true;
    }
  }

  return erreurStatique;
} //----- Fin de verifierTableStatique

//----------------------------------------------------------------- PRIVEE
void AnalyseStatique::initTableStatique (P &programme)
{
  list<Id> vids = programme.getIdVar();
  list<Id> cids = programme.getIdConst();

  // parcourir les listes pour construire la table
  list<Id>::iterator it;
  // c'est peut etre it++ au lieu de ++it
  for (it = vids.begin(); it != vids.end(); ++it)
  {
    EtatIdStatique * etatId = new EtatIdStatique(false);
    tableStatique.insert(pair<string, EtatIdStatique*>((*it).getNomId(),etatId));
  }

  for (it = cids.begin(); it != cids.end(); ++it)
  {
    EtatIdStatique * etatId = new EtatIdStatique(true);
    tableStatique.insert(pair<string, EtatIdStatique*>((*it).getNomId(),etatId));
  }
} //----- Fin de initTableStatique

void AnalyseStatique::traiterInstructions(P &programme)
{
  list<Ins*> instructions = programme.getListeIns();
  list<Ins*>::iterator it;

  // c'est peut etre it++ au lieu de ++it
  for (it = instructions.begin(); it != instructions.end(); ++it)
  {
    //Selon l'affectation
    switch ((**it).getType())
    {
      case ECRIRE:
        gererInstructionEcrire(**it);
        break;
      case LIRE:
        gererInstructionLire(**it);
        break;
      case AFFECTER:
        gererInstructionAffecter(**it);
        break;
      default:
        throw string("Erreur : Instrunction inconnue");
        erreurStatique = true;
    }
  }
} //----- Fin de traiterInstruction

void AnalyseStatique::gererInstructionEcrire(Ins& ins)
{
  map<string, EtatIdStatique*>::iterator it;

  list<string>::iterator id;
  for (id = ins.getListeId().begin(); id != ins.getListeId().end(); ++id)
  {
    if(idDeclare(*id))
    {
      it = tableStatique.find(*id);
      if(it->second->estAffecte())
      {
        it->second->utiliser();
      } else
      {
        throw string("Erreur : L'identifiant " + *id + " ne peut être dans une expression d'écriture car il n'a pas été affecté");
        erreurStatique = true;
      }
    } else
    {
      throw string("Erreur : L'identifiant " + *id + " n'a pas été déclaré");
      erreurStatique = true;
    }
  }
} //----- Fin de gererInstructionEcrire

void AnalyseStatique::gererInstructionLire(Ins& ins)
{
  string id = ins.getNomId();

  if (idDeclare(id))
  {
    map<string, EtatIdStatique*>::iterator it = tableStatique.find(id);

    if(it->second->estConstante())
    {
      throw string("Erreur : L'identifiant " + id + " ne peut être affecté car il a été déclaré en tant que constante");
      erreurStatique = true;
    } else
    {
      it->second->affecter();
    }
  } else
  {
    //cerr << "Erreur : L'identifiant " << id << " n'a pas été déclaré" << endl;
    throw string("Erreur : L'identifiant " + id + " n'a pas été déclaré");
    erreurStatique = true;
  }
} //----- Fin de gererInstructionLire

void AnalyseStatique::gererInstructionAffecter(Ins& ins)
{
  map<string, EtatIdStatique*>::iterator it;

  list<string>::iterator idDroite;
  for (idDroite = ins.getListeId().begin(); idDroite != ins.getListeId().end(); ++idDroite)
  {
    if(idDeclare(*idDroite))
    {
      it = tableStatique.find(*idDroite);
      if(it->second->estAffecte())
      {
        it->second->utiliser();
      } else
      {
        throw string("Erreur : L'identifiant " + *idDroite + " ne peut être dans la partie droite d'une instruction d'affectation car il n'a pas été affecté au préalable");
        erreurStatique = true;
      }
    } else
    {
      throw string("Erreur : L'identifiant " + *idDroite + " n'a pas été déclaré");
      erreurStatique = true;
    }
  }

  string idGauche = ins.getNomId();
  if (idDeclare(idGauche))
  {
    it = tableStatique.find(idGauche);

    if(it->second->estConstante())
    {
      throw string("Erreur : L'identifiant " + idGauche + " ne peut être affecté car il a été déclaré en tant que constante");
      erreurStatique = true;
    } else
    {
      it->second->affecter();
    }
  } else
  {
    //cerr << "Erreur : L'identifiant " << id << " n'a pas été déclaré" << endl;
    throw string("Erreur : L'identifiant " + idGauche + " n'a pas été déclaré");
    erreurStatique = true;
  }
} //----- Fin de gererInstructionAffecter

bool AnalyseStatique::idDeclare(string& id)
{
  map<string, EtatIdStatique*>::iterator it = tableStatique.find(id);
  return it != tableStatique.end();
}
