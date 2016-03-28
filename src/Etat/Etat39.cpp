/*************************************************************************
                           Etat39  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat39> (fichier Etat39.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat39.h"
#include "Etat29.h"
#include "Etat30.h"
#include "Etat31.h"
#include "../ExpUnaire.h"
#include "../ExpAdd.h"
#include "../ExpSub.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat39::transition(Automate* const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case MUL :
			automate->pushEtat(new Etat29());
			automate->decalage();
			automate->transitionLecture();
			break;
		case DIV :
			automate->pushEtat(new Etat30());
			automate->decalage();
			automate->transitionLecture();
			break;
		case OPM :
			automate->pushEtat(new Etat31());
			automate->transitionLecture();
			break;
		case PV :
		case ADD :
		case SUB :
		case PF :
			reduction(automate);
			break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat39::Etat39 ( const Etat39 & unEtat39 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat39>" << endl;
#endif
} //----- Fin de Etat39 (constructeur de copie)


Etat39::Etat39 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat39>" << endl;
#endif
} //----- Fin de Etat39


Etat39::~Etat39 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat39>" << endl;
#endif
} //----- Fin de ~Etat39


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
void Etat39::reduction(Automate* automate)
{
	Exp* exp;
	Exp* t;
	Symbole* op;

	for (int i = 0; i < 3; i++)
		automate->popEtat();
	t = (Exp*)automate->popSymbole();
	delete automate->popSymbole();//OPA
	op = automate->popSymbole();//ADD ou SUB
	exp = (Exp*)automate->popSymbole();

	if(op->getId() == ADD)
	{
		automate->pushSymbole(new ExpAdd(exp, t));
		automate->transitionReduction();
	}
	else
	{
		automate->pushSymbole(new ExpSub(exp, t));
		automate->transitionReduction();
	}
		
	delete op;
}