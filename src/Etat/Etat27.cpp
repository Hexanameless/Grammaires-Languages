/*************************************************************************
                           Etat27  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat27> (fichier Etat27.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat27.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat27::transition(Automate automate, Symbole symbole)
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
Etat27 & Etat27::operator = ( const Etat27 & unEtat27 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat27::Etat27 ( const Etat27 & unEtat27 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat27>" << endl;
#endif
} //----- Fin de Etat27 (constructeur de copie)


Etat27::Etat27 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat27>" << endl;
#endif
} //----- Fin de Etat27


Etat27::~Etat27 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat27>" << endl;
#endif
} //----- Fin de ~Etat27


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
