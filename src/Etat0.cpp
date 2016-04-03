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
#include "../header/Etat0.h"
#include "../header/Etat2.h"
#include "../header/Etat46.h"
#include "../header/Decl.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat0::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case VAR:
			automate->pushSymbole(new Decl(true));
			automate->transitionReduction();
			break;
		case CONST:
			automate->pushSymbole(new Decl(true));
			automate->transitionReduction();			
			break;
		case ECRIRE:
			automate->pushSymbole(new Decl(true));
			automate->transitionReduction();			
			break;
		case LIRE:
			automate->pushSymbole(new Decl(true));
			automate->transitionReduction();			
			break;
		case ID:
			automate->pushSymbole(new Decl(true));
			automate->transitionReduction();			
			break;
		case EP:
			automate->pushEtat(new Etat46());
			automate->transitionLecture();
			break;
		case DECL:
			automate->pushEtat(new Etat2());
			automate->transitionLecture();
			break;
		case DECLROOT:
			automate->pushEtat(new Etat2());
			automate->transitionLecture();
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
