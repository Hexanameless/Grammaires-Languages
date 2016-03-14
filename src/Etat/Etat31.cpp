/*************************************************************************
                           Etat31  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat31> (fichier Etat31.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat31.h"
#include "Etat25.h"
#include "Etat26.h"
#include "Etat32.h"
#include "Etat33.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat31::transition(Automate automate, Symbole symbole)
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
			automate.pushState(new Etat33());
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat31 & Etat31::operator = ( const Etat31 & unEtat31 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat31::Etat31 ( const Etat31 & unEtat31 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat31>" << endl;
#endif
} //----- Fin de Etat31 (constructeur de copie)


Etat31::Etat31 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat31>" << endl;
#endif
} //----- Fin de Etat31


Etat31::~Etat31 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat31>" << endl;
#endif
} //----- Fin de ~Etat31


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
