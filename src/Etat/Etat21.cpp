/*************************************************************************
                           Etat21  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat21> (fichier Etat21.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat21.h"
#include "Etat22.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat21::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case ID:
			automate->pushState(new Etat22());
			break;
		default :
			automate->rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat21::Etat21 ( const Etat21 & unEtat21 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat21>" << endl;
#endif
} //----- Fin de Etat21 (constructeur de copie)


Etat21::Etat21 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat21>" << endl;
#endif
} //----- Fin de Etat21


Etat21::~Etat21 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat21>" << endl;
#endif
} //----- Fin de ~Etat21


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
