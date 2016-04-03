/*************************************************************************
                           Etat27  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat27> (fichier Etat27.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat27.h"
#include "../header/ExpUnaire.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat27::transition(Automate* const automate, Symbole* symbole)
{
	automate->popEtat();
	ExpUnaire* exp = (ExpUnaire*)automate->popSymbole();
	automate->pushSymbole(new ExpUnaire(T, exp));
    automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat27::Etat27 ( const Etat27 & unEtat27 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat27>" << endl;
#endif
} //----- Fin de Etat27 (constructeur de copie)


Etat27::Etat27 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat27>" << endl;
#endif
} //----- Fin de Etat27


Etat27::~Etat27 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat27>" << endl;
#endif
} //----- Fin de ~Etat27


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
