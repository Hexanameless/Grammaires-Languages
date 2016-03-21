/*************************************************************************
                           Decl  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Decl> (fichier Decl.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Decl.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
// type Decl::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Decl::Decl ( const Decl & unDecl )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Decl>" << endl;
#endif
} //----- Fin de Decl (constructeur de copie)


Decl::Decl ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Decl>" << endl;
#endif
} //----- Fin de Decl


Decl::~Decl ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Decl>" << endl;
#endif
} //----- Fin de ~Decl


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
