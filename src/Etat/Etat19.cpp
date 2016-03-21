	 /*************************************************************************
                           Etat19  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat19> (fichier Etat19.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat19.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat19::transition(Automate* const automate, Symbole symbole)
{
	for (int i = 0; i < 5; i++)
		automate->popState();
	automate->transition(CIDS);
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat19::Etat19 ( const Etat19 & unEtat19 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat19>" << endl;
#endif
} //----- Fin de Etat19 (constructeur de copie)


Etat19::Etat19 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat19>" << endl;
#endif
} //----- Fin de Etat19


Etat19::~Etat19 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat19>" << endl;
#endif
} //----- Fin de ~Etat19


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
