/*************************************************************************
                           Etat30  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat30> (fichier Etat30.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat30.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat30::transition(Automate automate, Symbole symbole)
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
Etat30 & Etat30::operator = ( const Etat30 & unEtat30 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat30::Etat30 ( const Etat30 & unEtat30 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat30>" << endl;
#endif
} //----- Fin de Etat30 (constructeur de copie)


Etat30::Etat30 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat30>" << endl;
#endif
} //----- Fin de Etat30


Etat30::~Etat30 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat30>" << endl;
#endif
} //----- Fin de ~Etat30


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
