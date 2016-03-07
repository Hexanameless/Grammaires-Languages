/*************************************************************************
                           Etat13  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat13> (fichier Etat13.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat13.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat13::transition(Automate automate, Symbole symbole)
{
	for (int i = 0; i < 3; i++)
		automate.popState();
	automate.transition(Symbole::Cids);
}
//------------------------------------------------- Surcharge d'opérateurs
Etat13 & Etat13::operator = ( const Etat13 & unEtat13 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat13::Etat13 ( const Etat13 & unEtat13 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat13>" << endl;
#endif
} //----- Fin de Etat13 (constructeur de copie)


Etat13::Etat13 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat13>" << endl;
#endif
} //----- Fin de Etat13


Etat13::~Etat13 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat13>" << endl;
#endif
} //----- Fin de ~Etat13


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées