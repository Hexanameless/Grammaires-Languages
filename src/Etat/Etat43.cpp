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

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat43::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case ID:
			automate->pushState(new Etat25());
			break;
		case VAL :
			automate->pushState(new Etat26());
		case F :
			automate->pushState(new Etat27());
			break;
		case T :
			automate->pushState(new Etat28());
			break;
		case EXP :
			automate->pushState(new Etat44());
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
