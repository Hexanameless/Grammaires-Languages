/*************************************************************************
                           Etat26  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat26> (fichier Etat26.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat26.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat26::transition(Automate automate, Symbole symbole)
{
	automate.popState();
	automate.transition(F);
}
//------------------------------------------------- Surcharge d'opérateurs
Etat26 & Etat26::operator = ( const Etat26 & unEtat26 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat26::Etat26 ( const Etat26 & unEtat26 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat26>" << endl;
#endif
} //----- Fin de Etat26 (constructeur de copie)


Etat26::Etat26 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat26>" << endl;
#endif
} //----- Fin de Etat26


Etat26::~Etat26 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat26>" << endl;
#endif
} //----- Fin de ~Etat26


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
