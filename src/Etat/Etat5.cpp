/*************************************************************************
                           Etat5  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat5> (fichier Etat5.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat5.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat5::transition(Automate automate, Symbole symbole)
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
Etat5 & Etat5::operator = ( const Etat5 & unEtat5 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat5::Etat5 ( const Etat5 & unEtat5 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat5>" << endl;
#endif
} //----- Fin de Etat5 (constructeur de copie)


Etat5::Etat5 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat5>" << endl;
#endif
} //----- Fin de Etat5


Etat5::~Etat5 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat5>" << endl;
#endif
} //----- Fin de ~Etat5


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
