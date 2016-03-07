/*************************************************************************
                           Etat32  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat32> (fichier Etat32.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat32.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat32::transition(Automate automate, Symbole symbole)
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
Etat32 & Etat32::operator = ( const Etat32 & unEtat32 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat32::Etat32 ( const Etat32 & unEtat32 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat32>" << endl;
#endif
} //----- Fin de Etat32 (constructeur de copie)


Etat32::Etat32 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat32>" << endl;
#endif
} //----- Fin de Etat32


Etat32::~Etat32 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat32>" << endl;
#endif
} //----- Fin de ~Etat32


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
