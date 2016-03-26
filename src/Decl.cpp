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
      this->idSymbole = DECL;
  } //----- Fin de Decl

  Decl::Decl (Decl* adecl, Vids* avids)
  {
  	Decl();
  	decl = adecl;
  	vids = avids;
  }
  Decl::Decl (Decl* adecl, Cids* acids)
  {
  	Decl();
  	decl = adecl;
  	cids = acids;
  }

  Decl::~Decl ( )
  {
  #ifdef MAP
      cout << "Appel au destructeur de <Decl>" << endl;
  #endif
  } //----- Fin de ~Decl

  Vids* Decl::getVids()
  {
    return vids;
  }

  Cids* Decl::getCids()
  {
    return cids;
  }

  void Decl::makeVars()
  {
    // on parcourt toutes les paires de this->cids pour populer this->Vars
      map<Id*, Val*> mapCid = this->cids->getMapCid();
      for (map<Id*, Val*>::const_iterator i = mapCid.begin(); i != mapCid.end(); ++i)
      {
        this->vars.insert(std::pair<Id*,Exp*>(i->first, i->second));
      }

      // on parcourt toutes les paires de this->cids pour populer this->Vars
      map<Id*, Exp*> mapVid = this->vids->getMapVid();
      for (map<Id*, Exp*>::const_iterator i = mapVid.begin(); i != mapVid.end(); ++i)
      {
        this->vars.insert(std::pair<Id*,Exp*>(i->first, i->second));
      }
  }

  map<Id*, Exp*> Decl::getVars()
  {
    return vars;
  }

  Decl* Decl::getDecl()
  {
  	return decl;
  }

//------------------------------------------------------------------ PRIVE
