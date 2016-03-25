/*************************************************************************
                           Vids  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Vids> (fichier Vids.cpp) --
#include <iostream>
using namespace std;

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
	Vids::mapVid.insert(pair<Id, Val>(aId, (Exp)(NULL)));
}

void Vids::affecter(Id aId, Exp & aExp) {
	Vids::mapVid[aId] = aVal;
}

list<Id> getId()
{
  list<Id> ids;
  MapVid::iterator it_type;

  for(it_type = Vids::mapVid.begin(); it_type!= Vids::mapVid.end(); it_type++) {
    ids.push_back(it_type->first);
  }

  return ids;
}

MapVid Vids::getMapVid()
{
  return this->mapVid;
}
