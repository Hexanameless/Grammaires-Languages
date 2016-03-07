/*************************************************************************
                           Etat10  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat10> (fichier Etat10.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat10.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat10::transition(Automate automate, Symbole symbole)
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
Etat10 & Etat10::operator = ( const Etat10 & unEtat10 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat10::Etat10 ( const Etat10 & unEtat10 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat10>" << endl;
#endif
} //----- Fin de Etat10 (constructeur de copie)


Etat10::Etat10 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat10>" << endl;
#endif
} //----- Fin de Etat10


Etat10::~Etat10 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat10>" << endl;
#endif
} //----- Fin de ~Etat10


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
