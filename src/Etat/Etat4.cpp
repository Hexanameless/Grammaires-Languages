/*************************************************************************
                           Etat4  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat4> (fichier Etat4.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat4.h"
#include "Etat5.h"
#include "Etat6.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat4::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case Id: 	//Id
			automate.pushState(new Etat5());
			break;
		case Vids: 	//Vids
			automate.pushState(new Etat6());
			break;
		default :
			automate.rejette(); 
			break;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat4 & Etat4::operator = ( const Etat4 & unEtat4 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat4::Etat4 ( const Etat4 & unEtat4 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat4>" << endl;
#endif
} //----- Fin de Etat4 (constructeur de copie)


Etat4::Etat4 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat4>" << endl;
#endif
} //----- Fin de Etat4


Etat4::~Etat4 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat4>" << endl;
#endif
} //----- Fin de ~Etat4


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
