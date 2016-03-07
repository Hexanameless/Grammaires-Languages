/*************************************************************************
                           Etat7  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat7> (fichier Etat7.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat7.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat7::transition(Automate automate, Symbole symbole)
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
Etat7 & Etat7::operator = ( const Etat7 & unEtat7 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat7::Etat7 ( const Etat7 & unEtat7 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat7>" << endl;
#endif
} //----- Fin de Etat7 (constructeur de copie)


Etat7::Etat7 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat7>" << endl;
#endif
} //----- Fin de Etat7


Etat7::~Etat7 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat7>" << endl;
#endif
} //----- Fin de ~Etat7


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
