/*************************************************************************
                           Etat15  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat15> (fichier Etat15.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat15.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat15::transition(Automate automate, Symbole symbole)
{
	for (int i = 0; i < 4; i++)
		automate.popState();
	automate.transition(Decl);
}
//------------------------------------------------- Surcharge d'opérateurs
Etat15 & Etat15::operator = ( const Etat15 & unEtat15 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat15::Etat15 ( const Etat15 & unEtat15 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat15>" << endl;
#endif
} //----- Fin de Etat15 (constructeur de copie)


Etat15::Etat15 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat15>" << endl;
#endif
} //----- Fin de Etat15


Etat15::~Etat15 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat15>" << endl;
#endif
} //----- Fin de ~Etat15


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
