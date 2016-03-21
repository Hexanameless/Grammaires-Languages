/*************************************************************************
                           Etat40  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat40> (fichier Etat40.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat40.h"
#include "Etat36.h"
#include "Etat37.h"
#include "Etat38.h"
#include "Etat41.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat40::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case ADD :
			automate->pushState(new Etat36());
			break;
		case SUB :
			automate->pushState(new Etat37());
			break;
		case OpA :
			automate->pushState(new Etat38());
			break;
		case PV :
			automate->pushState(new Etat41());
			break;
		default :
			automate->rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat40::Etat40 ( const Etat40 & unEtat40 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat40>" << endl;
#endif
} //----- Fin de Etat40 (constructeur de copie)


Etat40::Etat40 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat40>" << endl;
#endif
} //----- Fin de Etat40


Etat40::~Etat40 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat40>" << endl;
#endif
} //----- Fin de ~Etat40


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
