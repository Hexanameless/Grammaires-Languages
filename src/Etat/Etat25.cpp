/*************************************************************************
                           Etat25  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat25> (fichier Etat25.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat25.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat25::transition(Automate automate, Symbole symbole)
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
Etat25 & Etat25::operator = ( const Etat25 & unEtat25 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat25::Etat25 ( const Etat25 & unEtat25 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat25>" << endl;
#endif
} //----- Fin de Etat25 (constructeur de copie)


Etat25::Etat25 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat25>" << endl;
#endif
} //----- Fin de Etat25


Etat25::~Etat25 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat25>" << endl;
#endif
} //----- Fin de ~Etat25


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
