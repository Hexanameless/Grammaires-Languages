/*************************************************************************
                           Etat1  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat1> (fichier Etat1.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat1.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Etat Etat1::transition(Automate automate, Symbole symbole)
{
	switch (symbole.getId())
	{
		case : 	//Var
			;
		case : 	//Const
			;
		case :	//Ecrire
			;
		case :	//Lire
			;
		case : //id
			;
		case : //$
			;
		case : //P
			;
		case : //Decl
			;
		default : 
			;
	}
}
//------------------------------------------------- Surcharge d'opérateurs
Etat1 & Etat1::operator = ( const Etat1 & unEtat1 )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Etat1::Etat1 ( const Etat1 & unEtat1 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat1>" << endl;
#endif
} //----- Fin de Etat1 (constructeur de copie)


Etat1::Etat1 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat1>" << endl;
#endif
} //----- Fin de Etat1


Etat1::~Etat1 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat1>" << endl;
#endif
} //----- Fin de ~Etat1


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
