/*************************************************************************
                           Etat2  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat2> (fichier Etat2.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat2.h"
#include "../header/Etat4.h"
#include "../header/Etat10.h"
#include "../header/Etat20.h"
#include "../header/InsAffecter.h"
#include "../header/InsLire.h"
#include "../header/InsEcrire.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat2::transition(Automate * const automate, Symbole* symbole)
{
	switch (symbole->getId())
	{
		case VAR :
			automate->pushEtat(new Etat4());
			automate->decalage();
			automate->transitionLecture();
			break;
		case CONST :
			automate->pushEtat(new Etat10());
			automate->decalage();
			automate->transitionLecture();			
			break;
		case LIRE :
			automate->pushSymbole(new InsLire(true));
			automate->transitionReduction();
			break;
		case ID :
			automate->pushSymbole(new InsAffecter(true));
			automate->transitionReduction();
			break;
		case ECRIRE :
			automate->pushSymbole(new InsEcrire(true));
			automate->transitionReduction();
			break;
		case INS :
		    automate->pushEtat(new Etat20());
		    automate->transitionLecture();
		    break;
		case INSROOT :
		    automate->pushEtat(new Etat20());
		    automate->transitionLecture();
		    break;
		default :
			automate->rejette(); 
	}
}
//------------------------------------------------- Surcharge d'opérateurs


Etat2::Etat2 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat2>" << endl;
#endif
} //----- Fin de Etat2


Etat2::~Etat2 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat2>" << endl;
#endif
} //----- Fin de ~Etat2


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
