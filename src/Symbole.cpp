/*************************************************************************
                           Symbole  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Réalisation de la classe <Symbole> (fichier Symbole.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Symbole.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int Symbole::getId ()
// Algorithme :
//
{
} //----- Fin de Méthode getId()


//------------------------------------------------- Surcharge d'opérateurs
Symbole & Symbole::operator = ( const Symbole & unSymbole )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Symbole::Symbole ( const Symbole & unSymbole )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Symbole>" << endl;
#endif
} //----- Fin de Symbole (constructeur de copie)


Symbole::Symbole ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Symbole>" << endl;
#endif
} //----- Fin de Symbole


Symbole::~Symbole ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Symbole>" << endl;
#endif
} //----- Fin de ~Symbole


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
