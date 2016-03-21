/*************************************************************************
                           Etat18  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat18> (fichier Etat18.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat18.h"
#include "Etat19.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat18::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case VAR :
			automate.pushState(new Etat19());
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- CONSTructeurs - destructeur
Etat18::Etat18 ( const Etat18 & unEtat18 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat18>" << endl;
#endif
} //----- Fin de Etat18 (constructeur de copie)


Etat18::Etat18 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat18>" << endl;
#endif
} //----- Fin de Etat18


Etat18::~Etat18 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat18>" << endl;
#endif
} //----- Fin de ~Etat18


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
