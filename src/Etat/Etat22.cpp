/*************************************************************************
                           Etat22  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat22> (fichier Etat22.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat22.h"
#include "Etat23.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat22::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Symbole::Virg :
			automate.pushState(new Etat23());
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat22 & Etat22::operator = ( const Etat22 & unEtat22 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat22::Etat22 ( const Etat22 & unEtat22 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat22>" << endl;
#endif
} //----- Fin de Etat22 (constructeur de copie)


Etat22::Etat22 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat22>" << endl;
#endif
} //----- Fin de Etat22


Etat22::~Etat22 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat22>" << endl;
#endif
} //----- Fin de ~Etat22


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
