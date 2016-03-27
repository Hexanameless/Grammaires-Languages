/*************************************************************************
                           Etat13  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat13> (fichier Etat13.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat13.h"
#include "../Val.h"
#include "../Id.h"
#include "../Cids.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat13::transition(Automate* const automate, Symbole symbole)
{
	for (int i = 0; i < 3; i++)
	   automate->popState();

    Val* val = (Val*)automate->popSymbole(); // on récupère la valeur de la constante
    automate ->popSymbole(); // On dépile le eg
    Id* id = (Id*)automate->popSymbole(); // On récupère l'id correspondant
    Cids* cids = new Cids ();
    cids->affecter(id, val);
	automate->transition(cids);
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat13::Etat13 ( const Etat13 & unEtat13 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat13>" << endl;
#endif
} //----- Fin de Etat13 (constructeur de copie)


Etat13::Etat13 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat13>" << endl;
#endif
} //----- Fin de Etat13


Etat13::~Etat13 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat13>" << endl;
#endif
} //----- Fin de ~Etat13


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
