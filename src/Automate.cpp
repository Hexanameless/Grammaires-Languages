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
	cout<<"J'empile le symbole "<<pileSymboles.top()->getId()<<endl;
	lexer->avancer();
}

void Automate::pushEtat(Etat* etat)
{
	pileEtats.push(etat);
}

void Automate::pushSymbole(Symbole* symbole)
{
	cout<<"J'empile le symbole "<<symbole->getId()<<endl;
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
	cout<<"pop!"<<endl;
	delete current;
} //----- Fin de Méthode popState(Etat etat)

Symbole* Automate::popSymbole()
{
	Symbole * s = this->pileSymboles.top();
	pileSymboles.pop();
	return s;
}











// void Automate::lecture ()
// {
// 	Symbole* symbole = lexer->getNext();
// 	cout<<"j'empile le symbole"<<symbole->getId()<<endl;
// 	pileSymboles.push(symbole);
// 	cout<<"transition sur l'état courant"<<endl;
// 	Etat* current = this->pileEtats.top();
// 	current->transition(this, symbole);
// } //----- Fin de Méthode lecture()

// void Automate::transition (Symbole * symbole)
// {
// 	pileSymboles.push(symbole);
// 	cout<<"push symbole"<< symbole->getId()<<endl;
// 	Etat* current = this->pileEtats.top();
// 	current->transition(this, symbole);
// }

// void Automate::pushState(Etat * etat)
// {
// 	pileEtats.push(etat);

// 	// on enchaine sur la lecture d'un nouveau symbole
// 	this->lecture();
// } //----- Fin de Méthode pushState(Etat etat)

// void Automate::changeState(Etat * etat)
// {
// 	pileEtats.push(etat);

// 	// on enchaine sur la transition 
// 	Symbole* dessus = popSymbole();
// 	Symbole* transi = pileSymboles.top();
// 	pileSymboles.push(dessus);
// 	transition(transi);
// } //----- Fin de Méthode pushState(Etat etat)


void Automate::accepte()
{
	cout << "HAAAAAAAAAAAAAAAAAAAAAAAAAAAAALELUJAH" << endl;
} //----- Fin de Méthode accepte

void Automate::rejette()
{
	cout<<"gros con c'est pas bon"<<endl;
	//get pointeur du programme pour voir où se trouve l'erreur
} //----- Fin de Méthode rejete
