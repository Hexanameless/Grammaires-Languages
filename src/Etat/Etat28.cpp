/*************************************************************************
                           Etat28  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat28> (fichier Etat28.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat28.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat28::transition(Automate automate, Symbole symbole)
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
Etat28 & Etat28::operator = ( const Etat28 & unEtat28 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat28::Etat28 ( const Etat28 & unEtat28 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat28>" << endl;
#endif
} //----- Fin de Etat28 (constructeur de copie)


Etat28::Etat28 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat28>" << endl;
#endif
} //----- Fin de Etat28


Etat28::~Etat28 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat28>" << endl;
#endif
} //----- Fin de ~Etat28


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
