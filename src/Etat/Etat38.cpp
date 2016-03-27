/*************************************************************************
                           Etat38  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat38> (fichier Etat38.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat38.h"
#include "Etat25.h"
#include "Etat26.h"
#include "Etat27.h"
#include "Etat32.h"
#include "Etat39.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat38::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case ID:
			automate->pushState(new Etat25());
			break;
		case VAL :
			automate->pushState(new Etat26());
			break;
		case PO :
			automate->pushState(new Etat32());
			break;
		case F :
			automate->pushState(new Etat27());
			break;
		case T :
			automate->pushState(new Etat39());
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat38::Etat38 ( const Etat38 & unEtat38 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat38>" << endl;
#endif
} //----- Fin de Etat38 (constructeur de copie)


Etat38::Etat38 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat38>" << endl;
#endif
} //----- Fin de Etat38


Etat38::~Etat38 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat38>" << endl;
#endif
} //----- Fin de ~Etat38


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
