/*************************************************************************
                           AnalyseStatique  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <AnalyseStatique> (fichier AnalyseStatique.cpp) --
#include <iostream>
using namespace std;

#include "AnalyseStatique.h"

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
  std::list vids = programme.getVids();
  std::list cids = programme.getCids();

  //TODO parcourir les listes pour construire la table
}
