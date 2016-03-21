/*************************************************************************
                           Etat23  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat23> (fichier Etat23.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat23.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat23::transition(Automate automate, Symbole symbole)
{
	for (int i = 0; i < 4; i++)
		auomate.popState();
	automate.transition(Ins);
}
//------------------------------------------------- Surcharge d'opérateurs
Etat23 & Etat23::operator = ( const Etat23 & unEtat23 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat23::Etat23 ( const Etat23 & unEtat23 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat23>" << endl;
#endif
} //----- Fin de Etat23 (constructeur de copie)


Etat23::Etat23 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat23>" << endl;
#endif
} //----- Fin de Etat23


Etat23::~Etat23 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat23>" << endl;
#endif
} //----- Fin de ~Etat23


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
