/*************************************************************************
                           Etat3  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat3> (fichier Etat3.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat3.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat3::transition(Automate automate, Symbole symbole)
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
Etat3 & Etat3::operator = ( const Etat3 & unEtat3 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat3::Etat3 ( const Etat3 & unEtat3 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat3>" << endl;
#endif
} //----- Fin de Etat3 (constructeur de copie)


Etat3::Etat3 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat3>" << endl;
#endif
} //----- Fin de Etat3


Etat3::~Etat3 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat3>" << endl;
#endif
} //----- Fin de ~Etat3


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
