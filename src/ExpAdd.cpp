/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <ExpAdd> (fichier ExpAdd.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ExpAdd.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpAdd::lecture ()
// Algorithme :
//
{
} //----- Fin de Méthode lecture()




//------------------------------------------------- Surcharge d'opérateurs
ExpAdd & ExpAdd::operator = ( const ExpAdd & unExpAdd)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ExpBin::ExpAdd ( const ExpAdd & unExpAdd)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpBin>" << endl;
#endif
} //----- Fin de Exp (constructeur de copie)


ExpBin::ExpAdd ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpBin>" << endl;
#endif
} //----- Fin de ExpBin


ExpBin::~ExpAdd ( )
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


