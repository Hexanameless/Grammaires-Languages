/*************************************************************************
                           Etat39  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat39> (fichier Etat39.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat39.h"
#include "Etat29.h"
#include "Etat30.h"
#include "Etat31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat39::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Mul :
			automate.pushState(new Etat29());
			break;
		case Div :
			automate.pushState(new Etat30());
			break;
		case OpM :
			automate.pushState(new Etat31());
			break;
		case Pv :
			for (int i = 0; i < 3; i++)
				automate.popState();
			automate.transition(Exp);
			break;
		case Add :
			for (int i = 0; i < 3; i++)
				automate.popState();
			automate.transition(Exp);
			break;
		case Sub :
			for (int i = 0; i < 3; i++)
				automate.popState();
			automate.transition(Exp);
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat39 & Etat39::operator = ( const Etat39 & unEtat39 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat39::Etat39 ( const Etat39 & unEtat39 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat39>" << endl;
#endif
} //----- Fin de Etat39 (constructeur de copie)


Etat39::Etat39 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat39>" << endl;
#endif
} //----- Fin de Etat39


Etat39::~Etat39 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat39>" << endl;
#endif
} //----- Fin de ~Etat39


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
