/*************************************************************************
                           Etat20  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat20> (fichier Etat20.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat20.h"
#include "Etat21.h"
#include "Etat24.h"
#include "Etat42.h"
#include "Etat22.h"
#include "../Ins.h"
#include "../Decl.h"
#include "../P.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat20::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case ECRIRE :
			automate->pushEtat(new Etat24());
			automate->decalage();
			automate->transitionLecture();
			break;
		case LIRE :
			automate->pushEtat(new Etat21());
			automate->decalage();
			automate->transitionLecture();
			break;
		case ID:
			automate->pushEtat(new Etat42());
			automate->decalage();
			automate->transitionLecture();
			break;
		case DOLLAR :
			for (int i = 0; i < 2; i++)
				automate->popEtat();
			Ins* instructions;
			Decl* declarations;
			instructions = (Ins*)automate->popSymbole();
			declarations = (Decl*)automate->popSymbole();
			automate->pushSymbole(new P(declarations, instructions));
			automate->transitionReduction();
			break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat20::Etat20 ( const Etat20 & unEtat20 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat20>" << endl;
#endif
} //----- Fin de Etat20 (constructeur de copie)


Etat20::Etat20 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat20>" << endl;
#endif
} //----- Fin de Etat20


Etat20::~Etat20 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat20>" << endl;
#endif
} //----- Fin de ~Etat20


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
