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
{
#ifdef MAP
  cout << "Appel au destructeur de <Automate>" << endl;
#endif
	delete lexer;
} //----- Fin de ~Automate

void Automate::lecture ()
{
	Symbole symbole = lexer->getNext();
	Etat current = this->pileEtats.top();
	current.transition(this, symbole);
} //----- Fin de Méthode lecture()

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

void Automate::addVar()
{
#ifdef MAP
    cout << "Le nom de la variable ajoutée est : " << lexer->getSymboleCourant() << endl;
#endif
    delete idActuel;
    idActuel = new Id(lexer->getSymboleCourant());
	vids.addVid(*idActuel);
}

void Automate::addConst()
{
#ifdef MAP
    cout << "Le nom de la constante ajoutée est : " << lexer->getSymboleCourant() << endl;
#endif
    delete idActuel;
    idActuel = new Id(lexer->getSymboleCourant());
    cids.addCid(*idActuel);
}

void Automate::affConst()
{
#ifdef MAP
    cout << "Le nom de la constante mise a jour est : " << ". Sa valeur est maintenant :" << lexer->getSymboleCourant() << endl;
#endif
    int val;
    istringstream ss(lexer->getSymboleCourant());
	ss >> val;
	Val* valeur = new Val(val);
    cids.affecter(*idActuel, *valeur);
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

void Automate::analyseStatique()
{
	AnalyseStatique *analyseStatique = new AnalyseStatique(pileSymboles.top());
	analyseStatique.verifierTableStatique();
}

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


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
