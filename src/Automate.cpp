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
	this->pushEtat(new Etat0());
	transitionLecture();

  if (analyseStatique)
  {
    //Il faut que le haut de la pile soit le symbole P
  	AnalyseStatique analyseStatique(dynamic_cast<P*>(pileSymboles.top()));
  	analyseStatique.verifierTableStatique();
  }

  if(transformation)
  {
  	AnalyseStatique analyseStatique(dynamic_cast<P*>(pileSymboles.top()));
  	analyseStatique.verifierTableStatique();
  	if(!analyseStatique.getErreurStatique())
  	{
  		((P*)pileSymboles.top())->optimisation();
  	}
  }

  if (affichage)
  {
    dynamic_cast<P*>(pileSymboles.top())->afficher();
  }
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

void Automate::decalage()
{
	pileSymboles.push(lexer->lireSuivant());
	lexer->avancer();
}

void Automate::pushEtat(Etat* etat)
{
	pileEtats.push(etat);
}

void Automate::pushSymbole(Symbole* symbole)
{
	pileSymboles.push(symbole);
}

void Automate::transitionLecture()
{
	pileEtats.top()->transition(this, lexer->lireSuivant());
}

void Automate::transitionReduction()
{
	pileEtats.top()->transition(this, pileSymboles.top());
}

void Automate::popEtat()
{
	Etat* current = this->pileEtats.top();
	pileEtats.pop();
	delete current;
} //----- Fin de Méthode popState(Etat etat)

Symbole* Automate::popSymbole()
{
	Symbole * s = this->pileSymboles.top();
	pileSymboles.pop();
	return s;
}

void Automate::accepte()
{
	cout << "Compilation terminee!" << endl;
} //----- Fin de Méthode accepte

void Automate::rejette()
{
	cout<<"Erreur de syntaxe (probablement un ;)"<< endl;
	//get pointeur du programme pour voir où se trouve l'erreur
} //----- Fin de Méthode rejete
