/*************************************************************************
                           Etat10  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat10> (fichier Etat10.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat10.h"
#include "Etat11.h"
#include "Etat14.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat10::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case ID:
			automate->pushEtat(new Etat11());
			automate->decalage();
			automate->transitionLecture();
			break;
		case CIDS :
			automate->pushEtat(new Etat14());
			automate->transitionLecture();
			break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- CONSTructeurs - destructeur
Etat10::Etat10 ( const Etat10 & unEtat10 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat10>" << endl;
#endif
} //----- Fin de Etat10 (constructeur de copie)


Etat10::Etat10 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat10>" << endl;
#endif
} //----- Fin de Etat10


Etat10::~Etat10 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat10>" << endl;
#endif
} //----- Fin de ~Etat10


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
