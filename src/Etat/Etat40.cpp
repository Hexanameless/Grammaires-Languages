/*************************************************************************
                           Etat40  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat40> (fichier Etat40.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat40.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat40::transition(Automate automate, Symbole symbole)
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
Etat40 & Etat40::operator = ( const Etat40 & unEtat40 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat40::Etat40 ( const Etat40 & unEtat40 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat40>" << endl;
#endif
} //----- Fin de Etat40 (constructeur de copie)


Etat40::Etat40 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat40>" << endl;
#endif
} //----- Fin de Etat40


Etat40::~Etat40 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat40>" << endl;
#endif
} //----- Fin de ~Etat40


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
