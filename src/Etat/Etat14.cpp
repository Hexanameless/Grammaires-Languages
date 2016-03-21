/*************************************************************************
                           Etat14  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat14> (fichier Etat14.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat14.h"
#include "Etat15.h"
#include "Etat16.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat14::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case VIRG :
			automate->pushState(new Etat16());
			break;
		case PV :
			automate->pushState(new Etat15());

		default :
			automate->rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat14::Etat14 ( const Etat14 & unEtat14 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat14>" << endl;
#endif
} //----- Fin de Etat14 (constructeur de copie)


Etat14::Etat14 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat14>" << endl;
#endif
} //----- Fin de Etat14


Etat14::~Etat14 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat14>" << endl;
#endif
} //----- Fin de ~Etat14


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
