/*************************************************************************
                           Etat29  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat29> (fichier Etat29.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat29.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat29::transition(Automate* const automate, Symbole* symbole)
{
	automate->popEtat();
	automate->pushSymbole(new Symbole(OPM));
	automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- CONSTructeurs - destructeur
Etat29::Etat29 ( const Etat29 & unEtat29 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat29>" << endl;
#endif
} //----- Fin de Etat29 (constructeur de copie)


Etat29::Etat29 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat29>" << endl;
#endif
} //----- Fin de Etat29


Etat29::~Etat29 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat29>" << endl;
#endif
} //----- Fin de ~Etat29


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
