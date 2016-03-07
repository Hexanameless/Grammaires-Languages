/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Exp> (fichier Exp.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Exp.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Exp::lecture ()
// Algorithme :
//
{
} //----- Fin de Méthode lecture()


//------------------------------------------------- Surcharge d'opérateurs
Exp & Exp::operator = ( const Exp & unExp)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Exp::Exp ( const Exp & unExp)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Exp>" << endl;
#endif
} //----- Fin de Exp (constructeur de copie)


Exp::Exp ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Exp>" << endl;
#endif
} //----- Fin de Automate


Exp::~Exp ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Exp>" << endl;
#endif
} //----- Fin de ~Exp


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées

