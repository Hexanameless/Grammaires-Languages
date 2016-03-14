/*************************************************************************
                           Etat12  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat12> (fichier Etat12.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat12.h"
#include "Etat13.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat12::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Symbole::Val :
			automate.transition(new Etat13());
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat12 & Etat12::operator = ( const Etat12 & unEtat12 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat12::Etat12 ( const Etat12 & unEtat12 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat12>" << endl;
#endif
} //----- Fin de Etat12 (constructeur de copie)


Etat12::Etat12 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat12>" << endl;
#endif
} //----- Fin de Etat12


Etat12::~Etat12 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat12>" << endl;
#endif
} //----- Fin de ~Etat12


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
