/*************************************************************************
                           Etat37  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat37> (fichier Etat37.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat37.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat37::transition(Automate* const automate, Symbole* symbole)
{
	automate->popEtat();
	//On garde le symbole SUB
	automate->pushSymbole(new Symbole(OPA));
    automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat37::Etat37 ( const Etat37 & unEtat37 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat37>" << endl;
#endif
} //----- Fin de Etat37 (constructeur de copie)


Etat37::Etat37 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat37>" << endl;
#endif
} //----- Fin de Etat37


Etat37::~Etat37 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat37>" << endl;
#endif
} //----- Fin de ~Etat37


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
