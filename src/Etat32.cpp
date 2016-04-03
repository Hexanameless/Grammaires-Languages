/*************************************************************************
                           Etat32  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat32> (fichier Etat32.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat32.h"
#include "../header/Etat25.h"
#include "../header/Etat26.h"
#include "../header/Etat27.h"
#include "../header/Etat28.h"
#include "../header/Etat34.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat32::transition(Automate* const automate, Symbole* symbole)
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
			automate->pushEtat(new Etat28());
			automate->transitionLecture();
			break;
		case EXP :
			automate->pushEtat(new Etat34());
			automate->transitionLecture();
			break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- CONSTructeurs - destructeur
Etat32::Etat32 ( const Etat32 & unEtat32 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat32>" << endl;
#endif
} //----- Fin de Etat32 (constructeur de copie)


Etat32::Etat32 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat32>" << endl;
#endif
} //----- Fin de Etat32


Etat32::~Etat32 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat32>" << endl;
#endif
} //----- Fin de ~Etat32


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
