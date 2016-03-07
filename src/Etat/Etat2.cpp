/*************************************************************************
                           Etat2  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat2> (fichier Etat2.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat2.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat2::transition(Automate automate, Symbole symbole)
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
Etat2 & Etat2::operator = ( const Etat2 & unEtat2 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat2::Etat2 ( const Etat2 & unEtat2 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat2>" << endl;
#endif
} //----- Fin de Etat2 (constructeur de copie)


Etat2::Etat2 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat2>" << endl;
#endif
} //----- Fin de Etat2


Etat2::~Etat2 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat2>" << endl;
#endif
} //----- Fin de ~Etat2


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
