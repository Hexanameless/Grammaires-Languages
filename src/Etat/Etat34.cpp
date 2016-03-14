/*************************************************************************
                           Etat34  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat34> (fichier Etat34.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat34.h"
#include "Etat35.h"
#include "Etat36.h"
#include "Etat37.h"
#include "Etat38.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat34::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Symbole::Pf :
			automate.pushState(new Etat35());
			break;
		case Symbole::Add :
			automate.pushState(new Etat36());
			break;
		case Symbole::Sub :
			automate.pushState(new Etat37());
			break;
		case Symbole::OpA :
			automate.pushState(new Etat38());
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat34 & Etat34::operator = ( const Etat34 & unEtat34 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat34::Etat34 ( const Etat34 & unEtat34 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat34>" << endl;
#endif
} //----- Fin de Etat34 (constructeur de copie)


Etat34::Etat34 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat34>" << endl;
#endif
} //----- Fin de Etat34


Etat34::~Etat34 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat34>" << endl;
#endif
} //----- Fin de ~Etat34


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
