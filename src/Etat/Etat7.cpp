/*************************************************************************
                           Etat7  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat7> (fichier Etat7.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat7.h"
#include "../Decl.h"
#include "../Vids.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat7::transition(Automate* const automate, Symbole symbole)
{
	for (int i = 0; i < 4; i++)
		automate->popState();

    automate->popSymbole(); //On pop le point virgule
    Vids* vids = automate->popSymbole(); //On récupère le Vids créé
    automate->popSymbole(); //On pop le var
    Decl* declPrecedent = automate->popSymbole();

	automate->transition(new Decl(declPrecedent, vids));
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat7::Etat7 ( const Etat7 & unEtat7 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat7>" << endl;
#endif
} //----- Fin de Etat7 (constructeur de copie)


Etat7::Etat7 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat7>" << endl;
#endif
} //----- Fin de Etat7


Etat7::~Etat7 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat7>" << endl;
#endif
} //----- Fin de ~Etat7


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
