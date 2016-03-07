/*************************************************************************
                           Etat42  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat42> (fichier Etat42.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat42.h"
#include "Etat43.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat42::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case SymboleAff :
			automate.pushState(new Etat43());
			break;
		default : 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat42 & Etat42::operator = ( const Etat42 & unEtat42 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat42::Etat42 ( const Etat42 & unEtat42 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat42>" << endl;
#endif
} //----- Fin de Etat42 (constructeur de copie)


Etat42::Etat42 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat42>" << endl;
#endif
} //----- Fin de Etat42


Etat42::~Etat42 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat42>" << endl;
#endif
} //----- Fin de ~Etat42


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
