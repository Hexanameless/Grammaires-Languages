/*************************************************************************
                           Etat2  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat2> (fichier Etat2.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat2.h"
#include "Etat4.h"
#include "Etat10.h"
#include "Etat20.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat2::transition(Automate * const automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case VAR :
			automate->pushState(new Etat4());
			break;
		case CONST :
			automate->pushState(new Etat10());
			break;
		case LIRE :
			automate->transition(INS);
			break;
		case ID :
			automate->transition(INS);
			break;
		case VAL :
			automate->transition(INS);
			break;
		case INS :
		    automate->pushState(new Etat20());
		    break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs


Etat2::Etat2 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat2>" << endl;
#endif
} //----- Fin de Etat2


Etat2::~Etat2 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat2>" << endl;
#endif
} //----- Fin de ~Etat2


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
