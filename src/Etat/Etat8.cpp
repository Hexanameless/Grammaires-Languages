/*************************************************************************
                           Etat8  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat8> (fichier Etat8.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat8.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat8::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case ID: 	//VAR
			automate->transition(new Etat9());
			break;
		default :
			automate->rejette();
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat8::Etat8 ( const Etat8 & unEtat8 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat8>" << endl;
#endif
} //----- Fin de Etat8 (constructeur de copie)


Etat8::Etat8 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat8>" << endl;
#endif
} //----- Fin de Etat8


Etat8::~Etat8 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat8>" << endl;
#endif
} //----- Fin de ~Etat8


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
