/*************************************************************************
                           Etat24  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat24> (fichier Etat24.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat24.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat24::transition(Automate automate, Symbole symbole)
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
Etat24 & Etat24::operator = ( const Etat24 & unEtat24 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat24::Etat24 ( const Etat24 & unEtat24 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat24>" << endl;
#endif
} //----- Fin de Etat24 (constructeur de copie)


Etat24::Etat24 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat24>" << endl;
#endif
} //----- Fin de Etat24


Etat24::~Etat24 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat24>" << endl;
#endif
} //----- Fin de ~Etat24


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
