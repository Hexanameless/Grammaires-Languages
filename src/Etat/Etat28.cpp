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
#include "../Exp.h"
#include "../ExpUnaire.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat28::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		Exp* exp;
		case MUL :
			automate->pushState(new Etat29());
			break;
		case DIV :
			automate->pushState(new Etat30());
			break;
		case OPM :
			automate->pushState(new Etat31());
			break;
		case PV :
			automate->popState();
			exp = (Exp*)automate->popSymbole();
			automate->transition(new ExpUnaire(EXP, exp));
			break;
		case ADD :
			automate->popState();
			exp = (Exp*)automate->popSymbole();
			automate->transition(new ExpUnaire(EXP, exp));
			break;
		case SUB :
			automate->popState();
			exp = (Exp*)automate->popSymbole();
			automate->transition(new ExpUnaire(EXP, exp));
			break;
		default :
			automate->rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
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
