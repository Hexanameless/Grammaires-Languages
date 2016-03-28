/*************************************************************************
                           Etat43  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat43> (fichier Etat43.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat43.h"
#include "Etat25.h"
#include "Etat26.h"
#include "Etat27.h"
#include "Etat28.h"
#include "Etat44.h"
#include "Etat32.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat43::transition(Automate* const automate, Symbole* symbole)
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
		case F :
			automate->pushEtat(new Etat27());
			automate->transitionLecture();
			break;
		case T :
			automate->pushEtat(new Etat28());
			automate->transitionLecture();
			break;
		case EXP :
			automate->pushEtat(new Etat44());
			automate->transitionLecture();
			break;
		case PO :
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
Etat43::Etat43 ( const Etat43 & unEtat43 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat43>" << endl;
#endif
} //----- Fin de Etat43 (constructeur de copie)


Etat43::Etat43 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat43>" << endl;
#endif
} //----- Fin de Etat43


Etat43::~Etat43 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat43>" << endl;
#endif
} //----- Fin de ~Etat43


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
