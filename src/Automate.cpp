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
	
	// on enchaine sur la lecture d'un nouveau symbole
	this->lecture()
} //----- Fin de Méthode pushState(Etat etat)


void Automate::popState()
// Algorithme :
//
{
	Etat current = this->pileEtats.top();
	pileEtats.pop();
	delete &current;
} //----- Fin de Méthode popState(Etat etat)


void Automate::accepte()
// Algorithme :
//
{
	cout << "Fin du programme" << endl;
} //----- Fin de Méthode accepte


void Automate::rejette()
// Algorithme :
//
{
	//get pointeur du programme pour voir où se trouve l'erreur
} //----- Fin de Méthode rejete


//------------------------------------------------- Surcharge d'opérateurs
Automate & Automate::operator = ( const Automate & unAutomate )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Automate::Automate (const string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Automate>" << endl;
#endif
	this->lexer = new Lexer(prog);
	Etat0 e0;
	this->pileEtat.pushState(e0);
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
