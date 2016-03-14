/*************************************************************************
                           Etat37  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat37> (fichier Etat37.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat37.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat37::transition(Automate automate, Symbole symbole)
{
	automate.popState();
	automate.transition(Symbole::OpA);
}
//------------------------------------------------- Surcharge d'opérateurs
Etat37 & Etat37::operator = ( const Etat37 & unEtat37 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat37::Etat37 ( const Etat37 & unEtat37 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat37>" << endl;
#endif
} //----- Fin de Etat37 (constructeur de copie)


Etat37::Etat37 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat37>" << endl;
#endif
} //----- Fin de Etat37


Etat37::~Etat37 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat37>" << endl;
#endif
} //----- Fin de ~Etat37


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
