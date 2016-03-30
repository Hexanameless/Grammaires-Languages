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

  Decl::Decl (bool first)
  {
  #ifdef MAP
    cout << "Appel au constructeur de <Decl>" << endl;
  #endif
    if(first)
      this->idSymbole = DECLROOT;
    else
      this->idSymbole = DECL;
  } //----- Fin de Decl

  Decl::Decl (Decl* adecl, Vids* avids)
  {
  	this->idSymbole = DECL;
  	decl = adecl;
  	vids = avids;
  }
  Decl::Decl (Decl* adecl, Cids* acids)
  {
  	this->idSymbole = DECL;
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

  Decl* Decl::getDecl()
  {
  	return decl;
  }
