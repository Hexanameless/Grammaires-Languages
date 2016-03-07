/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <ExpBin> (fichier ExpBin.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ExpBin.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpBin::lecture ()
// Algorithme :
//
{
} //----- Fin de Méthode lecture()


//------------------------------------------------- Surcharge d'opérateurs
ExpBin & ExpBin::operator = ( const ExpBin & unExpBin)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ExpBin::ExpBin ( const ExpBin & unExpBin)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpBin>" << endl;
#endif
} //----- Fin de Exp (constructeur de copie)


Exp::Exp ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpBin>" << endl;
#endif
} //----- Fin de ExpBin


Exp::~Exp ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpBin>" << endl;
#endif
} //----- Fin de ~ExpBin


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées

