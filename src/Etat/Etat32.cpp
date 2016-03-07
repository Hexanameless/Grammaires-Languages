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
#include "Etat25.h"
#include "Etat26.h"
#include "Etat27.h"
#include "Etat28.h"
#include "Etat34.h"

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
		case Symbole::Id :
			automate.pushState(new Etat25());
			break;
		case Symbole::Val :
			automate.pushState(new Etat26());
			break;
		case Symbole::Po :
			automate.pushState(new Etat32());
			break;
		case Symbole::F :
			automate.pushState(new Etat27());
			break;
		case Symbole::T :
			automate.pushState(new Etat28());
			break;
		case Symbole::Exp :
			automate.pushState(new Etat34());
			break;
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
