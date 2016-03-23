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
#include <map>

#include "AnalyseStatique.h"
#include "Ins.h"
//Si l'enum e_symbole n'est pas visible
// #include "Symbole.h"

//----------------------------------------------------------------- PUBLIC
AnalyseStatique::AnalyseStatique (const P &programme)
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

void AnalyseStatique::initTableStatique(const P &programme)
{
  std::list<Id> vids = programme.getVids();
  std::list<Id> cids = programme.getCids();

  // parcourir les listes pour construire la table
  std::list<Id>::iterator it;
  // c'est peut etre it++ au lieu de ++it
  for (it = vids.begin(); it != vids.end(); ++it)
  {
    EtatIdStatique * etatId = new EtatIdStatique(false);
    tableStatique.insert(std::pair<*Id, *EtatIdStatique>(*it,etatId))
  }

  for (it = cids.begin(); it != cids.end(); ++it)
  {
    EtatIdStatique * etatId = new EtatIdStatique(true);
    tableStatique.insert(std::pair<*Id, *EtatIdStatique>(*it,etatId))
  } //----- Fin de initTableStatique
}

void AnalyseStatique::TraiterInstruction(const P &programme)
{
  std::list<Ins> insctructions = programme.getListeIns();
  std::list<Id>::iterator it;

  // c'est peut etre it++ au lieu de ++it
  for (it = instructions.begin(); it != instructions.end(); ++it)
  {
    //Selon l'affectation
    switch (*it.getId())
    {
      case INSECRIRE:
        gererInstructionEcrire();
        break;
      case INSLIRE:
        gererInstructionLire();
        break;
      case INSAFFECTER:
        gererInstructionAffecter();
        break;
      default:
        gererInstructionErreur();
    }
  }
}
