/*************************************************************************
                           Etat8  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat8> (fichier Etat8.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat8.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat8::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Symbole::Id : 	//Var
			automate.transition(new Etat9());
			break;
		default :
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat8 & Etat8::operator = ( const Etat8 & unEtat8 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat8::Etat8 ( const Etat8 & unEtat8 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat8>" << endl;
#endif
} //----- Fin de Etat8 (constructeur de copie)


Etat8::Etat8 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat8>" << endl;
#endif
} //----- Fin de Etat8


Etat8::~Etat8 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat8>" << endl;
#endif
} //----- Fin de ~Etat8


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
