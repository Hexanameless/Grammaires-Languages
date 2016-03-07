/*************************************************************************
                           Etat46  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat46> (fichier Etat46.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat46.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat46::transition(Automate automate, Symbole symbole)
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
Etat46 & Etat46::operator = ( const Etat46 & unEtat46 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat46::Etat46 ( const Etat46 & unEtat46 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat46>" << endl;
#endif
} //----- Fin de Etat46 (constructeur de copie)


Etat46::Etat46 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat46>" << endl;
#endif
} //----- Fin de Etat46


Etat46::~Etat46 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat46>" << endl;
#endif
} //----- Fin de ~Etat46


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
