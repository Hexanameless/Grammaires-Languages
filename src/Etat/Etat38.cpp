/*************************************************************************
                           Etat38  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat38> (fichier Etat38.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat38.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat38::transition(Automate automate, Symbole symbole)
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
Etat38 & Etat38::operator = ( const Etat38 & unEtat38 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat38::Etat38 ( const Etat38 & unEtat38 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat38>" << endl;
#endif
} //----- Fin de Etat38 (constructeur de copie)


Etat38::Etat38 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat38>" << endl;
#endif
} //----- Fin de Etat38


Etat38::~Etat38 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat38>" << endl;
#endif
} //----- Fin de ~Etat38


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
