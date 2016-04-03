/*************************************************************************
                           Etat22  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat22> (fichier Etat22.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat22.h"
#include "../header/Etat23.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat22::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case PV :
			automate->pushEtat(new Etat23());
			automate->decalage();
			automate->transitionLecture();
			break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat22::Etat22 ( const Etat22 & unEtat22 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat22>" << endl;
#endif
} //----- Fin de Etat22 (constructeur de copie)


Etat22::Etat22 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat22>" << endl;
#endif
} //----- Fin de Etat22


Etat22::~Etat22 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat22>" << endl;
#endif
} //----- Fin de ~Etat22


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
