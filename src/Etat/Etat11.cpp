/*************************************************************************
                           Etat11  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat11> (fichier Etat11.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat11.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat11::transition(Automate automate, Symbole symbole)
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
Etat11 & Etat11::operator = ( const Etat11 & unEtat11 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat11::Etat11 ( const Etat11 & unEtat11 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat11>" << endl;
#endif
} //----- Fin de Etat11 (constructeur de copie)


Etat11::Etat11 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat11>" << endl;
#endif
} //----- Fin de Etat11


Etat11::~Etat11 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat11>" << endl;
#endif
} //----- Fin de ~Etat11


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
