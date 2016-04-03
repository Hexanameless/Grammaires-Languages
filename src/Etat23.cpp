/*************************************************************************
                           Etat23  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat23> (fichier Etat23.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat23.h"
#include "../header/Id.h"
#include "../header/Ins.h"
#include "../header/InsLire.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat23::transition(Automate* const automate, Symbole* symbole)
{
	for (int i = 0; i < 4; i++)
		automate->popEtat();

    delete automate->popSymbole();
    Id* id = (Id*)automate->popSymbole();
    delete automate->popSymbole();
    Ins* ins = (Ins*)automate->popSymbole();

	automate->pushSymbole(new InsLire(ins, id));
    automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat23::Etat23 ( const Etat23 & unEtat23 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat23>" << endl;
#endif
} //----- Fin de Etat23 (constructeur de copie)


Etat23::Etat23 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat23>" << endl;
#endif
} //----- Fin de Etat23


Etat23::~Etat23 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat23>" << endl;
#endif
} //----- Fin de ~Etat23


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
