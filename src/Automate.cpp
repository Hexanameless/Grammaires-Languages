/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Automate> (fichier Automate.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

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
	Symbole symbole = lexer->getNext();
	Etat current = this->pileEtats.top();
	current.transition(*this, symbole);
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
	Etat current = this->pileEtats.top();
	pileEtats.pop();
	delete &current;
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
Automate::Automate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Automate>" << endl;
#endif
	this->lexer = new Lexer("TODO");
} //----- Fin de Automate


Automate::~Automate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Automate>" << endl;
#endif
	delete lexer;
} //----- Fin de ~Automate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
