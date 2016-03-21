/*************************************************************************
                           Etat0  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat0> (fichier Etat0.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat0.h"
#include "Etat2.h"
#include "Etat46.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat0::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case VAR:
			automate->transition(DECL);
			break;
		case CONST:
			automate->transition(DECL);
			break;
		case ECRIRE:
			automate->transition(DECL);
			break;
		case LIRE:
			automate->transition(DECL);
			break;
		case ID:
			automate->transition(DECL);
			break;
		case P:
			automate->pushState(new Etat46());
			break;
		case DECL:
			automate->pushState(new Etat2());
			break;
		default :
			automate->rejette();
			break;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

Etat0::Etat0 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat0>" << endl;
#endif
} //----- Fin de Etat0


Etat0::~Etat0 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat0>" << endl;
#endif
} //----- Fin de ~Etat0


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
