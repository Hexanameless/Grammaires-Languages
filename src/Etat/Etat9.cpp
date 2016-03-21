/*************************************************************************
                           Etat9  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat9> (fichier Etat9.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat9.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat9::transition(Automate* const automate, Symbole symbole)
{
	for (int i = 0; i < 3; i++)
		automate->popState();
	automate->transition(VIDS);
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat9::Etat9 ( const Etat9 & unEtat9 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat9>" << endl;
#endif
} //----- Fin de Etat9 (constructeur de copie)


Etat9::Etat9 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat9>" << endl;
#endif
} //----- Fin de Etat9


Etat9::~Etat9 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat9>" << endl;
#endif
} //----- Fin de ~Etat9


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
