/*************************************************************************
                           Etat25  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat25> (fichier Etat25.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat25.h"
#include "../header/Id.h"
#include "../header/ExpUnaire.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat25::transition(Automate* const automate, Symbole* symbole)
{
	automate->popEtat();
	Id* id = (Id*)automate->popSymbole();
	automate->pushSymbole(new ExpUnaire(F, id));
    automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- CONSTructeurs - destructeur
Etat25::Etat25 ( const Etat25 & unEtat25 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat25>" << endl;
#endif
} //----- Fin de Etat25 (constructeur de copie)


Etat25::Etat25 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat25>" << endl;
#endif
} //----- Fin de Etat25


Etat25::~Etat25 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat25>" << endl;
#endif
} //----- Fin de ~Etat25


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
