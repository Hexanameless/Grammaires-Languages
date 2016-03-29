/*************************************************************************
                           Etat6  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat6> (fichier Etat6.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat6.h"
#include "Etat8.h"
#include "Etat7.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat6::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case VIRG: 	//VIRGule
			automate->pushEtat(new Etat8());
			automate->decalage();
			automate->transitionLecture();
			break;
		case PV: 	//point VIRGule
			automate->pushEtat(new Etat7());
			automate->decalage();
			automate->transitionLecture();
			break;
		case ID:
			automate->rejette(); 
			cout << ", attendue avant ";
			automate->afficherSuivant();
			cout<<"reprise sur erreur"<<endl;
			automate->pushEtat(new Etat8());
			automate->pushSymbole(new Symbole(VIRG));
			automate->transitionLecture();
			break;
		case CONST:
		case VAR:
			automate->rejette(); 
			cout << "; attendue avant ";
			automate->afficherSuivant();
			automate->pushEtat(new Etat7());
			automate->pushSymbole(new Symbole(PV));
			automate->transitionLecture();
			break;
		default :
			automate->rejette(); 
			cout << ", ou ; attendu avant ";
			automate->afficherSuivant();
			break;
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat6::Etat6 ( const Etat6 & unEtat6 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat6>" << endl;
#endif
} //----- Fin de Etat6 (constructeur de copie)


Etat6::Etat6 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat6>" << endl;
#endif
} //----- Fin de Etat6


Etat6::~Etat6 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat6>" << endl;
#endif
} //----- Fin de ~Etat6


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
