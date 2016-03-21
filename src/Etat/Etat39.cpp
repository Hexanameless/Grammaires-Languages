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

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat39::transition(Automate* const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case MUL :
			automate->pushState(new Etat29());
			break;
		case DIV :
			automate->pushState(new Etat30());
			break;
		case OpM :
			automate->pushState(new Etat31());
			break;
		case PV :
			for (int i = 0; i < 3; i++)
				automate->popState();
			automate->transition(EXP);
			break;
		case ADD :
			for (int i = 0; i < 3; i++)
				automate->popState();
			automate->transition(EXP);
			break;
		case SUB :
			for (int i = 0; i < 3; i++)
				automate->popState();
			automate->transition(EXP);
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
