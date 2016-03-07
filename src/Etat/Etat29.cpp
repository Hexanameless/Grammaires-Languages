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
#include "Etat29.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat29::transition(Automate automate, Symbole symbole)
{
	automate.popState();
	automate.transition(Symbole::OpM);
}
//------------------------------------------------- Surcharge d'opérateurs
Etat29 & Etat29::operator = ( const Etat29 & unEtat29 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
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
