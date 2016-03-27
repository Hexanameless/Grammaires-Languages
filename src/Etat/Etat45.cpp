/*************************************************************************
                           Etat45  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat45> (fichier Etat45.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat45.h"
#include "../Exp.h"
#include "../Id.h"
#include "../InsAffecter.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat45::transition(Automate* const automate, Symbole symbole)
{
	for (int i = 0; i < 5; i++)
		automate->popState();
    automate->popSymbole();
    Exp* exp = (Exp*)automate->popSymbole();
    automate->popSymbole();
    Id* id = (Id*)automate->popSymbole();
    Ins* ins = (Ins*)automate->popSymbole();
	automate->transition(new InsAffecter(ins, id, exp));
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat45::Etat45 ( const Etat45 & unEtat45 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat45>" << endl;
#endif
} //----- Fin de Etat45 (constructeur de copie)


Etat45::Etat45 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat45>" << endl;
#endif
} //----- Fin de Etat45


Etat45::~Etat45 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat45>" << endl;
#endif
} //----- Fin de ~Etat45


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
