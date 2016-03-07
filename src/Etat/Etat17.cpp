/*************************************************************************
                           Etat17  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat17> (fichier Etat17.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat17.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat17::transition(Automate automate, Symbole symbole)
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
Etat17 & Etat17::operator = ( const Etat17 & unEtat17 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat17::Etat17 ( const Etat17 & unEtat17 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat17>" << endl;
#endif
} //----- Fin de Etat17 (constructeur de copie)


Etat17::Etat17 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat17>" << endl;
#endif
} //----- Fin de Etat17


Etat17::~Etat17 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat17>" << endl;
#endif
} //----- Fin de ~Etat17


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
