/*************************************************************************
                           Etat44  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat44> (fichier Etat44.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat44.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat44::transition(Automate automate, Symbole symbole)
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
Etat44 & Etat44::operator = ( const Etat44 & unEtat44 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat44::Etat44 ( const Etat44 & unEtat44 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat44>" << endl;
#endif
} //----- Fin de Etat44 (constructeur de copie)


Etat44::Etat44 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat44>" << endl;
#endif
} //----- Fin de Etat44


Etat44::~Etat44 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat44>" << endl;
#endif
} //----- Fin de ~Etat44


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
