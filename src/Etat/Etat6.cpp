/*************************************************************************
                           Etat6  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat6> (fichier Etat6.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat6.h"
#include "Etat8.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat6::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Symbole::Virg: 	//Virgule
			automate.pushState(new Etat8());
			break;
		case Symbole Pv: 	//point Virgule
			automate.pushState(new Etat7());
			break;
		default : 
			break;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat6 & Etat6::operator = ( const Etat6 & unEtat6 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat6::Etat6 ( const Etat6 & unEtat6 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat6>" << endl;
#endif
} //----- Fin de Etat6 (constructeur de copie)


Etat6::Etat6 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat6>" << endl;
#endif
} //----- Fin de Etat6


Etat6::~Etat6 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat6>" << endl;
#endif
} //----- Fin de ~Etat6


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
