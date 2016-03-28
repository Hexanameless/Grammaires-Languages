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
#include "ExpUnaire.h"


MapVid Vids::mapVid = MapVid();

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

	mapVid.clear();
} //----- Fin de ~Vids

//------------------------------------------------------------------ PRIVE

void Vids::addVid(Id* aId) {
  Val val(0);
  ExpUnaire exp(F, &val);
	mapVid.insert(pair<Id*, Exp*>(aId, &exp));
}

void Vids::affecter(Id* aId, Exp* aExp) {
  mapVid.erase(aId);
	mapVid.insert(pair<Id*, Exp*>(aId, aExp));
}

list<Id> Vids::getId()
{
  list<Id> ids;
  MapVid::iterator it_type;

  for(it_type = this->mapVid.begin(); it_type!= this->mapVid.end(); it_type++) {
    ids.push_back(*it_type->first);
  }

  return ids;
}

MapVid Vids::getMapVid()
{
  return mapVid;
}

void Vids::afficher()
{
  MapVid::iterator it;
  for(it = mapVid.begin(); it != mapVid.end(); ++it)
  {
    cout << "var ";
    it->first->afficher();
    cout << ";" << endl;
  }
}
