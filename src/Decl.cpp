/*************************************************************************
                           Decl  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Decl> (fichier Decl.cpp) --

#include <iostream>
using namespace std;
#include "Decl.h"

//----------------------------------------------------------------- PUBLIC

Decl::Decl ( const Decl & unDecl )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Decl>" << endl;
#endif
} //----- Fin de Decl (constructeur de copie)

Decl::Decl ()
{
#ifdef MAP
    cout << "Appel au constructeur de <Decl>" << endl;
#endif

} //----- Fin de Decl


Decl::Decl (Vids aVids, Cids aCids)
{
#ifdef MAP
    cout << "Appel au constructeur de <Decl>" << endl;
#endif

    // on parcourt toutes les paires de aCids pour populer this->Vars
    map<Id, Val> mapCid = aCids.getMapCid();
    for (map<Id, Val>::const_iterator i = mapCid.begin(); i != mapCid.end(); ++i)
    {
    	this->vars.insert(std::pair<Id,Exp>(i->first, i->second));
    }

    // on parcourt toutes les paires de aVids pour populer this->Vars
    map<Id, Exp> mapVid = aVids.getMapVid();
    for (map<Id, Exp>::const_iterator i = mapVid.begin(); i != mapVid.end(); ++i)
    {
    	this->vars.insert(std::pair<Id,Exp>(i->first, i->second));
    }

} //----- Fin de Decl

Decl::~Decl ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Decl>" << endl;
#endif
} //----- Fin de ~Decl

list<Id> Decl::getVids()
{
  return vids.getId();
}

list<Id> Decl::getCids()
{
  return cids.getId();
}

map<Id, Exp> Decl::getVars()
{
  return vars;
}

//------------------------------------------------------------------ PRIVE
