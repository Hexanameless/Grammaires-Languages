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

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat31::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case ID:
			automate->pushEtat(new Etat25());
			automate->decalage();
			automate->transitionLecture();
			break;
		case VAL :
			automate->pushEtat(new Etat26());
			automate->decalage();
			automate->transitionLecture();
			break;
		case PO :
			automate->pushEtat(new Etat32());
			automate->decalage();
			automate->transitionLecture();
			break;
		case F :
			automate->pushEtat(new Etat33());
			automate->transitionLecture();
			break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
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
