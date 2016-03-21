/*************************************************************************
                           Etat41  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat41> (fichier Etat41.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat41.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat41::transition(Automate* const automate, Symbole symbole)
{
	for (int i = 0; i < 4; i++)
		automate->popState();
	automate->transition(INS);
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat41::Etat41 ( const Etat41 & unEtat41 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat41>" << endl;
#endif
} //----- Fin de Etat41 (constructeur de copie)


Etat41::Etat41 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat41>" << endl;
#endif
} //----- Fin de Etat41


Etat41::~Etat41 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat41>" << endl;
#endif
} //----- Fin de ~Etat41


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
