/*************************************************************************
                           Etat4  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat4> (fichier Etat4.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat4.h"
#include "Etat5.h"
#include "Etat6.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat4::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case ID: 	//Id
			automate->pushEtat(new Etat5());
			automate->decalage();
			automate->transitionLecture();
			break;
		case VIDS: 	//VIDS
			automate->pushEtat(new Etat6());
			automate->transitionLecture();
			break;
		default :
			automate->rejette(); 
			cout << "nom de variable ou de constante attendu avant ";
			automate->afficherSuivant();
	}
}
//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- CONSTructeurs - destructeur
Etat4::Etat4 ( const Etat4 & unEtat4 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat4>" << endl;
#endif
} //----- Fin de Etat4 (constructeur de copie)


Etat4::Etat4 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat4>" << endl;
#endif
} //----- Fin de Etat4


Etat4::~Etat4 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat4>" << endl;
#endif
} //----- Fin de ~Etat4


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
