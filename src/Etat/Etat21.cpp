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

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat21::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Symbole::Id :
			automate.pushState(new Etat22());
			break;
		default : 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat21 & Etat21::operator = ( const Etat21 & unEtat21 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
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
