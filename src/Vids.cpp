/*************************************************************************
                           Vids  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Vids> (fichier Vids.cpp) --
using namespace std;
#include <iostream>

#include "Vids.h"

//------------------------------------------------------------------ PUBLIC

Vids::Vids ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Vids>" << endl;
#endif
} //----- Fin de Vids

Vids::~Vids ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Vids>" << endl;
#endif

	Vids::mapVid.clear();
} //----- Fin de ~Vids

//------------------------------------------------------------------ PRIVE

void Vids::addVid(Id aId) {
	Vids::mapVid.insert(pair<Id, Val>(aId, (Val)(NULL)));
}

void Vids::affecter(Id aId, Val aVal) {
	Vids::mapVid[aId] = aVal;
}

std::list<Id> getId()
{
  std::list<Id> ids;
  MapVid::iterator it_type;

  for(it_type iterator = mapVid.begin(); iterator != mapVid.end(); iterator++) {
    ids.push_back(iterator->first);
  }

  return ids;
}
