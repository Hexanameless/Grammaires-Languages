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

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat45::transition(Automate* const automate, Symbole symbole)
{
	for (int i = 0; i < 0; i++)
		automate->popState();
	automate->transition(INS);
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
