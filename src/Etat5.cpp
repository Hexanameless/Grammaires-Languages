/*************************************************************************
                           Etat5  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat5> (fichier Etat5.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat5.h"
#include "../header/Vids.h"
#include "../header/Id.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat5::transition(Automate* const automate, Symbole* symbole)
{
    automate->popEtat();
	Id* id = (Id*)automate->popSymbole();
    Vids* vids = new Vids();
    vids->addVid( id );
    automate->pushSymbole(vids);
    automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat5::Etat5 ( const Etat5 & unEtat5 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat5>" << endl;
#endif
} //----- Fin de Etat5 (constructeur de copie)

Etat5::Etat5 ()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat5>" << endl;
#endif
}

Etat5::~Etat5 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat5>" << endl;
#endif
} //----- Fin de ~Etat5


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
