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

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat34::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case PF :
			automate->pushState(new Etat35());
			break;
		case ADD :
			automate->pushState(new Etat36());
			break;
		case SUB :
			automate->pushState(new Etat37());
			break;
		case OpA :
			automate->pushState(new Etat38());
			break;
		default :
			automate->rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- CONSTructeurs - destructeur
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
