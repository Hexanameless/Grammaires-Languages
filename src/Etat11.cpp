/*************************************************************************
                           Etat11  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat11> (fichier Etat11.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat11.h"
#include "../header/Etat12.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat11::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case EG : 	//VAR
			automate->pushEtat(new Etat12());
			automate->decalage();
			automate->transitionLecture();
			break;
		default :
			automate->rejette();
			cout << "symbole = attendu avant ";
			automate->afficherSuivant();
			automate->pushSymbole(new Symbole(EG));
			automate->pushEtat(new Etat12());
			automate->transitionLecture();
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat11::Etat11 ( const Etat11 & unEtat11 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat11>" << endl;
#endif
} //----- Fin de Etat11 (constructeur de copie)


Etat11::Etat11 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat11>" << endl;
#endif
} //----- Fin de Etat11


Etat11::~Etat11 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat11>" << endl;
#endif
} //----- Fin de ~Etat11


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
