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

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat36::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case : 	//Var
			;
		case : 	//Const
			;
		case :	//Ecrire
			;
		case :	//Lire
			;
		case : //id
			;
		case : //$
			;
		case : //P
			;
		case : //Decl
			;
		default : 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat36 & Etat36::operator = ( const Etat36 & unEtat36 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
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
