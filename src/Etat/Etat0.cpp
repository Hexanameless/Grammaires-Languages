/*************************************************************************
                           Etat0  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat0> (fichier Etat0.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat0.h"
#include "Etat2"
#include "Etat46.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat0::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Symbole::var: 	//Var
			automate.transition(Symbole::Decl);
			break;
		case Symbole::Const: 	//Const
			automate.transition(Symbole::Decl);
			break;
		case Symbole::Ecrire:	//Ecrire
			automate.transition(Symbole::Decl);
			break;
		case Symbole::Lire:	//Lire
			automate.transition(Symbole::Decl);
			break;
		case Symbole::Id: //id
			automate.transition(Symbole::Decl);
			break;
		case Symbole::P: // P
			automate.pushState(new Etat46());
			break;
		case Symbole::Decl: //Declaration
			automate.pushState(new Etat2());
			break;
		default :
			automate.rejette();
			break;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat0 & Etat0::operator = ( const Etat0 & unEtat0 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat0::Etat0 ( const Etat0 & unEtat0 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat0>" << endl;
#endif
} //----- Fin de Etat0 (constructeur de copie)


Etat0::Etat0 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat0>" << endl;
#endif
} //----- Fin de Etat0


Etat0::~Etat0 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat0>" << endl;
#endif
} //----- Fin de ~Etat0


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
