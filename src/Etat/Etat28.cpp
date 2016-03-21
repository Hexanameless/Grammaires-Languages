/*************************************************************************
                           Etat28  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat28> (fichier Etat28.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat28.h"
#include "Etat29.h"
#include "Etat30.h"
#include "Etat31.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat28::transition(Automate automate, Symbole symbole)
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
			automate.popState();
			automate.transition(Exp);
			break;
		case Add :
			automate.popState();
			automate.transition(Exp);
			break;
		case Sub :
			automate.popState();
			automate.transition(Exp);
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat28 & Etat28::operator = ( const Etat28 & unEtat28 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat28::Etat28 ( const Etat28 & unEtat28 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat28>" << endl;
#endif
} //----- Fin de Etat28 (constructeur de copie)


Etat28::Etat28 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat28>" << endl;
#endif
} //----- Fin de Etat28


Etat28::~Etat28 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat28>" << endl;
#endif
} //----- Fin de ~Etat28


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
