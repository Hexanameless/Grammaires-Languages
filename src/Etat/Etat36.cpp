/*************************************************************************
                           Etat36  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat36> (fichier Etat36.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat36.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat36::transition(Automate automate, Symbole symbole)
{
	automate.popState();
	automate.transition(OpA);
}
//------------------------------------------------- Surcharge d'opérateurs

// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- CONSTructeurs - destructeur
Etat36::Etat36 ( const Etat36 & unEtat36 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat36>" << endl;
#endif
} //----- Fin de Etat36 (constructeur de copie)


Etat36::Etat36 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat36>" << endl;
#endif
} //----- Fin de Etat36


Etat36::~Etat36 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat36>" << endl;
#endif
} //----- Fin de ~Etat36


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
