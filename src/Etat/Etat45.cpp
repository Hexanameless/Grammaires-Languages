/*************************************************************************
                           Etat45  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat45> (fichier Etat45.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat45.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat45::transition(Automate automate, Symbole symbole)
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
Etat45 & Etat45::operator = ( const Etat45 & unEtat45 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat45::Etat45 ( const Etat45 & unEtat45 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat45>" << endl;
#endif
} //----- Fin de Etat45 (constructeur de copie)


Etat45::Etat45 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat45>" << endl;
#endif
} //----- Fin de Etat45


Etat45::~Etat45 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat45>" << endl;
#endif
} //----- Fin de ~Etat45


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
