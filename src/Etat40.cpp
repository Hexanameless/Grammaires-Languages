/*************************************************************************
                           Etat40  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat40> (fichier Etat40.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat40.h"
#include "../header/Etat36.h"
#include "../header/Etat37.h"
#include "../header/Etat38.h"
#include "../header/Etat41.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat40::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case ADD :
			automate->pushEtat(new Etat36());
			automate->decalage();
			automate->transitionLecture();
			break;
		case SUB :
			automate->pushEtat(new Etat37());
			automate->decalage();
			automate->transitionLecture();
			break;
		case OPA :
			automate->pushEtat(new Etat38());
			automate->transitionLecture();
			break;
		case PV :
			automate->pushEtat(new Etat41());
			automate->decalage();
			automate->transitionLecture();
			break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat40::Etat40 ( const Etat40 & unEtat40 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat40>" << endl;
#endif
} //----- Fin de Etat40 (constructeur de copie)


Etat40::Etat40 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat40>" << endl;
#endif
} //----- Fin de Etat40


Etat40::~Etat40 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat40>" << endl;
#endif
} //----- Fin de ~Etat40


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
