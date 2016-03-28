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
void Etat38::transition(Automate* const automate, Symbole* symbole)
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
			automate->pushEtat(new Etat27());
			automate->transitionLecture();
			break;
		case T :
			automate->pushEtat(new Etat39());
			automate->transitionLecture();
			break;
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
