/*************************************************************************
                           Etat24  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat24> (fichier Etat24.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat24.h"
#include "../header/Etat25.h"
#include "../header/Etat26.h"
#include "../header/Etat27.h"
#include "../header/Etat28.h"
#include "../header/Etat40.h"
#include "../header/Etat32.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat24::transition(Automate* const automate, Symbole* symbole)
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
		case F :	//LIRE
			automate->pushEtat(new Etat27());
			automate->transitionLecture();
			break;
		case T : //id
			automate->pushEtat(new Etat28());
			automate->transitionLecture();
			break;
		case EXP : //$
			automate->pushEtat(new Etat40());
			automate->transitionLecture();
			break;
		case PO:
			automate->pushEtat(new Etat32());
			automate->decalage();
			automate->transitionLecture();
			break;
		default :
			automate->rejette();
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat24::Etat24 ( const Etat24 & unEtat24 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat24>" << endl;
#endif
} //----- Fin de Etat24 (constructeur de copie)


Etat24::Etat24 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat24>" << endl;
#endif
} //----- Fin de Etat24


Etat24::~Etat24 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat24>" << endl;
#endif
} //----- Fin de ~Etat24


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
