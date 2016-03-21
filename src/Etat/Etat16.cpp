/*************************************************************************
                           Etat16  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat16> (fichier Etat16.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat16.h"
#include "Etat17.h"
//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat16::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case ID:
			automate->pushState(new Etat17());
			break;
		default :
			automate->rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- CONSTructeurs - destructeur
Etat16::Etat16 ( const Etat16 & unEtat16 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat16>" << endl;
#endif
} //----- Fin de Etat16 (constructeur de copie)


Etat16::Etat16 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat16>" << endl;
#endif
} //----- Fin de Etat16


Etat16::~Etat16 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat16>" << endl;
#endif
} //----- Fin de ~Etat16


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
