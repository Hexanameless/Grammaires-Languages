/*************************************************************************
                           Etat12  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat12> (fichier Etat12.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat12.h"
#include "Etat13.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat12::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case VAL :
			automate->pushEtat(new Etat13());
			automate->decalage();
			automate->transitionLecture();
			break;
		default :
			automate->rejette();
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat12::Etat12 ( const Etat12 & unEtat12 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat12>" << endl;
#endif
} //----- Fin de Etat12 (constructeur de copie)


Etat12::Etat12 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat12>" << endl;
#endif
} //----- Fin de Etat12


Etat12::~Etat12 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat12>" << endl;
#endif
} //----- Fin de ~Etat12


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
