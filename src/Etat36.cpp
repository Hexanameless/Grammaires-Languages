/*************************************************************************
                           Etat36  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat36> (fichier Etat36.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat36.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat36::transition(Automate* const automate, Symbole* symbole)
{
	automate->popEtat();
	//On garde le symbole ADD pour plus tard
	automate->pushSymbole(new Symbole(OPA));
    automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat36::Etat36 ( const Etat36 & unEtat36 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat36>" << endl;
#endif
} //----- Fin de Etat36 (constructeur de copie)


Etat36::Etat36 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat36>" << endl;
#endif
} //----- Fin de Etat36


Etat36::~Etat36 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat36>" << endl;
#endif
} //----- Fin de ~Etat36


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
