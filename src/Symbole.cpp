/*************************************************************************
                           Symbole  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Réalisation de la classe <Symbole> (fichier Symbole.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Symbole.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
e_symbole Symbole::getId ()
// Algorithme :
//
{
	return this->idSymbole;
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

Symbole::Symbole()
{
	this->idSymbole = NULL;
}


Symbole::Symbole (e_symbole id)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Symbole>" << endl;
#endif

    this->idSymbole = id;

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
