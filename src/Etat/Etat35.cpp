/*************************************************************************
                           Etat35  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat35> (fichier Etat35.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat35.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat35::transition(Automate automate, Symbole symbole)
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
Etat35 & Etat35::operator = ( const Etat35 & unEtat35 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat35::Etat35 ( const Etat35 & unEtat35 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat35>" << endl;
#endif
} //----- Fin de Etat35 (constructeur de copie)


Etat35::Etat35 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat35>" << endl;
#endif
} //----- Fin de Etat35


Etat35::~Etat35 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat35>" << endl;
#endif
} //----- Fin de ~Etat35


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
