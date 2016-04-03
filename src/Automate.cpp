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

#include "../header/Etat0.h"
#include "../header/Automate.h"
#include "../header/Val.h"
#include "../header/AnalyseStatique.h"

//----------------------------------------------------------------- PUBLIC
Automate::Automate (const string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation)
{
#ifdef MAP
  cout << "Appel au constructeur de <Automate>" << endl;
#endif
	this->lexer = new Lexer(prog);
	this->pushEtat(new Etat0());
	transitionLecture();

  AnalyseStatique as;

  if (analyseStatique || transformation || execution)
  {
    //Il faut que le haut de la pile soit le symbole P
    as = AnalyseStatique(dynamic_cast<P*>(pileSymboles.top()));
  	as.verifierTableStatique();
  }

  if(transformation && !as.getErreurStatique())
  {
  	((P*)pileSymboles.top())->optimisation();
  }

  if (affichage)
  {
    ((P*)(pileSymboles.top()))->afficher();
  }

  if(execution && !as.getErreurStatique())
  {
      ((P*)pileSymboles.top())->evaluation();
  }
} //----- Fin de Automate

Automate::~Automate ( )
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
	cout<<"Erreur de syntaxe à la suite de ";
  pileSymboles.top()->afficher();
} //----- Fin de Méthode rejete

void Automate::afficherSuivant()
{
  lexer->lireSuivant()->afficher();
  cout << endl;
} //----- Fin de Méthode rejete
