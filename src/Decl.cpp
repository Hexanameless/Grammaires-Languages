/*************************************************************************
                           Decl  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Decl> (fichier Decl.cpp) --
using namespace std;
#include <iostream>

#include "Decl.h"

//----------------------------------------------------------------- PUBLIC

Decl::Decl ( const Decl & unDecl )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Decl>" << endl;
#endif
} //----- Fin de Decl (constructeur de copie)

Decl::Decl ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Decl>" << endl;
#endif
} //----- Fin de Decl

Decl::~Decl ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Decl>" << endl;
#endif
} //----- Fin de ~Decl

Vids getVids()
{
  return vids;
}

Cids getCids()
{
  return cids;
}

//------------------------------------------------------------------ PRIVE
