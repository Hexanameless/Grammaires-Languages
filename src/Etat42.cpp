/*************************************************************************
                           Etat42  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat42> (fichier Etat42.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat42.h"
#include "../header/Etat43.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat42::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case AFF :
			automate->pushEtat(new Etat43());
			automate->decalage();
			automate->transitionLecture();
			break;
		default :
			automate->rejette();
			automate->afficherSuivant();
			automate->pushSymbole(new Symbole(AFF));
			automate->pushEtat(new Etat43());
			automate->transitionLecture();
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat42::Etat42 ( const Etat42 & unEtat42 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat42>" << endl;
#endif
} //----- Fin de Etat42 (constructeur de copie)


Etat42::Etat42 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat42>" << endl;
#endif
} //----- Fin de Etat42


Etat42::~Etat42 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat42>" << endl;
#endif
} //----- Fin de ~Etat42


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
