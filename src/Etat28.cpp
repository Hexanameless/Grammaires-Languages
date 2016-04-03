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
#include "../header/Etat28.h"
#include "../header/Etat29.h"
#include "../header/Etat30.h"
#include "../header/Etat31.h"
#include "../header/Exp.h"
#include "../header/ExpUnaire.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat28::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		Exp* exp;
		case MUL :
			automate->pushEtat(new Etat29());
			automate->decalage();
			automate->transitionLecture();
			break;
		case DIV :
			automate->pushEtat(new Etat30());
			automate->decalage();
			automate->transitionLecture();
			break;
		case OPM :
			automate->pushEtat(new Etat31());
			automate->transitionLecture();
			break;
		case ADD:
		case SUB:
		case PV:
		case PF:
			automate->popEtat();
			exp = (Exp*)automate->popSymbole();
			automate->pushSymbole(new ExpUnaire(EXP, exp));
			automate->transitionReduction();
			break;

		default :
			automate->rejette();
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
