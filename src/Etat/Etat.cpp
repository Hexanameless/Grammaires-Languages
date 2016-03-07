/*************************************************************************
                           Etat  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.
*************************************************************************/

//---------- Réalisation de la classe <Etat> (fichier Etat.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs
Etat & Etat::operator = ( const Etat & unEtat )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat::Etat ( const Etat & unEtat )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat>" << endl;
#endif
} //----- Fin de Etat (constructeur de copie)


Etat::Etat ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat>" << endl;
#endif
} //----- Fin de Etat


Etat::~Etat ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat>" << endl;
#endif
} //----- Fin de ~Etat


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
