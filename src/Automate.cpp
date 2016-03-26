/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Automate> (fichier Automate.cpp) --
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "Etat/Etat0.h"
#include "Automate.h"
#include "Val.h"
#include "AnalyseStatique.h"

//----------------------------------------------------------------- PUBLIC
Automate::Automate (const string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation)
{
#ifdef MAP
  cout << "Appel au constructeur de <Automate>" << endl;
#endif
	this->lexer = new Lexer(prog);
	this->pushState(new Etat0());
} //----- Fin de Automate

Automate::~Automate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Automate>" << endl;
#endif
	delete lexer;
	delete idActuel;
} //----- Fin de ~Automate

void Automate::lecture ()
{
	Symbole* symbole = lexer->getNext();
	pileSymboles.push(symbole);
	Etat current = this->pileEtats.top();
	current.transition(this, *symbole);
} //----- Fin de Méthode lecture()

void Automate::transition (Symbole * symbole)
{	
	pileSymboles.push(symbole);
	Etat current = this->pileEtats.top();
	current.transition(this, *symbole);
}

void Automate::pushState(Etat * etat)
{
	pileEtats.push(*etat);

	// on enchaine sur la lecture d'un nouveau symbole
	this->lecture();
} //----- Fin de Méthode pushState(Etat etat)

void Automate::popState()
{
	Etat current = this->pileEtats.top();
	pileEtats.pop();
	delete &current;
} //----- Fin de Méthode popState(Etat etat)

Symbole* Automate::popSymbole()
{
	Symbole * s = this->pileSymboles.top();
	pileSymboles.pop();
	return s;
}

void Automate::lireVar()
{

}

void Automate::accepte()
{
	cout << "Fin du programme" << endl;
} //----- Fin de Méthode accepte

void Automate::rejette()
{
	//get pointeur du programme pour voir où se trouve l'erreur
} //----- Fin de Méthode rejete

//------------------------------------------------------------------ Ctor & Dtor


Automate::Automate (const string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation)
{
  /*
  Il faut que le haut de la pile soit le symbole P
  
	AnalyseStatique analyseStatique(pileSymboles.top());
	analyseStatique.verifierTableStatique();
  */
#ifdef MAP
  cout << "Appel au constructeur de <Automate>" << endl;
#endif
	this->lexer = new Lexer(prog);
	this->pushState(new Etat0());
} //----- Fin de Automate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
