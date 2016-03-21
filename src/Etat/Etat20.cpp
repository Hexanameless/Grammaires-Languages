/*************************************************************************
                           Etat20  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat20> (fichier Etat20.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat20.h"
#include "Etat21.h"
#include "Etat24.h"
#include "Etat42.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat20::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Ecrire :
			automate.pushState(new Etat24());
			break;
		case Lire :
			automate.pushState(new Etat22());
			break;
		case Id :
			automate.pushState(new Etat42());
			break;
		case Dollar :
			for (int i = 0; i < 2; i++)
				automate.popState();
			automate.transition(P);
			break;
		default :
			automate.rejette(); 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat20 & Etat20::operator = ( const Etat20 & unEtat20 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat20::Etat20 ( const Etat20 & unEtat20 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat20>" << endl;
#endif
} //----- Fin de Etat20 (constructeur de copie)


Etat20::Etat20 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat20>" << endl;
#endif
} //----- Fin de Etat20


Etat20::~Etat20 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat20>" << endl;
#endif
} //----- Fin de ~Etat20


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
