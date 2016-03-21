/*************************************************************************
                           Etat46  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat46> (fichier Etat46.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat46.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat46::transition(Automate automate, Symbole symbole)
{
	automate.accepte();
}
//------------------------------------------------- Surcharge d'opérateurs

// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- CONSTructeurs - destructeur
Etat46::Etat46 ( const Etat46 & unEtat46 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat46>" << endl;
#endif
} //----- Fin de Etat46 (constructeur de copie)


Etat46::Etat46 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat46>" << endl;
#endif
} //----- Fin de Etat46


Etat46::~Etat46 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat46>" << endl;
#endif
} //----- Fin de ~Etat46


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
