/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Automate> (fichier Automate.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Automate.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Automate::lecture ()
// Algorithme :
//
{
} //----- Fin de Méthode lecture()

void Automate::pushState(Etat etat)
// Algorithme :
//
{
	pileEtats.push(etat);
} //----- Fin de Méthode pushState(Etat etat)

void Automate::popState()
// Algorithme :
//
{
	Etat etat = pileEtats.pop();
	delete etat;
} //----- Fin de Méthode popState(Etat etat)

void Automate::transition(Symbole symbole)
// Algorithme :
//
{
	Etat current = this->pileEtats.top();
	current.transition(*this, symbole);
} //----- Fin de Méthode transition(Symbole symbole)


//------------------------------------------------- Surcharge d'opérateurs
Automate & Automate::operator = ( const Automate & unAutomate )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Automate::Automate ( const Automate & unAutomate )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Automate>" << endl;
#endif
} //----- Fin de Automate (constructeur de copie)


Automate::Automate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Automate>" << endl;
#endif
} //----- Fin de Automate


Automate::~Automate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Automate>" << endl;
#endif
} //----- Fin de ~Automate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
