/*************************************************************************
                           Etat30  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat30> (fichier Etat30.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat30.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat30::transition(Automate* const automate, Symbole* symbole)
{
	automate->popEtat();
	automate->pushSymbole(new Symbole(OPM));
	automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat30::Etat30 ( const Etat30 & unEtat30 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat30>" << endl;
#endif
} //----- Fin de Etat30 (constructeur de copie)


Etat30::Etat30 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat30>" << endl;
#endif
} //----- Fin de Etat30


Etat30::~Etat30 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat30>" << endl;
#endif
} //----- Fin de ~Etat30


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
