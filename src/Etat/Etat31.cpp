/*************************************************************************
                           Etat31  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat31> (fichier Etat31.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat31::transition(Automate automate, Symbole symbole)
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
Etat31 & Etat31::operator = ( const Etat31 & unEtat31 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat31::Etat31 ( const Etat31 & unEtat31 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat31>" << endl;
#endif
} //----- Fin de Etat31 (constructeur de copie)


Etat31::Etat31 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat31>" << endl;
#endif
} //----- Fin de Etat31


Etat31::~Etat31 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat31>" << endl;
#endif
} //----- Fin de ~Etat31


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
