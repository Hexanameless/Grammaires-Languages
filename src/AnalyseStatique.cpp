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
AnalyseStatique::AnalyseStatique (P &programme)
{
#ifdef MAP
  cout << "Appel au constructeur de <AnalyseStatique>" << endl;
#endif

  erreurStatique = false;
  initTableStatique(programme);
  traiterInstructions(programme);
} //----- Fin de AnalyseStatique

AnalyseStatique::~AnalyseStatique ( )
{
#ifdef MAP
  cout << "Appel au destructeur de <AnalyseStatique>" << endl;
#endif
} //----- Fin de ~AnalyseStatique

//----------------------------------------------------------------- PRIVEE
void AnalyseStatique::initTableStatique (P &programme)
{
  list<Id> vids = programme.getVids();
  list<Id> cids = programme.getCids();

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
  list<Ins> instructions = programme.getListeIns();
  list<Ins>::iterator it;

  // c'est peut etre it++ au lieu de ++it
  for (it = instructions.begin(); it != instructions.end(); ++it)
  {
    //Selon l'affectation
    switch (it->getId())
    {
      case INSECRIRE:
        gererInstructionEcrire(*it);
        break;
      case INSLIRE:
        gererInstructionLire(*it);
        break;
      case INSAFFECTER:
        gererInstructionAffecter(*it);
        break;
      default:
        std::cerr << "Erreur : Instruction inconnue" << endl;
    }
  }
} //----- Fin de traiterInstruction

void AnalyseStatique::gererInstructionEcrire(Ins ins)
{
  for (string id : ins.getListeId())
  {
    //TODO
  }
} //----- Fin de gererInstructionEcrire

void AnalyseStatique::gererInstructionLire(Ins ins)
{
  string id = ins.getNomId();
  //TODO
} //----- Fin de gererInstructionLire

void AnalyseStatique::gererInstructionAffecter(Ins ins)
{
  for (string idDroite : ins.getListeId())
  {
    //TODO
  }

  string idGauche = ins.getNomId();
  //TODO
} //----- Fin de gererInstructionAffecter
