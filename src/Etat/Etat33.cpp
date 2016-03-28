/*************************************************************************
                           Etat33  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat33> (fichier Etat33.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Etat33.h"
#include "../ExpMult.h"
#include "../ExpDiv.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat33::transition(Automate* const automate, Symbole* symbole)
{
	for (int i = 0; i < 3; i++)
		automate->popEtat();
    //pour ne pas avoir a créer une classe par opérateur, nous n'avons pas
    //dépilé le MUL ou DIV de l'état 29/30
    Exp* f = (Exp*)automate->popSymbole();
    delete automate->popSymbole();//Symbole OPM
    Symbole* op = automate->popSymbole(); //Symbole MUL ou DIV
    Exp* t = (Exp*)automate->popSymbole();

    if(op->getId() == MUL)
    {
        automate->pushSymbole(new ExpMult(t, f));
        automate->transitionReduction();
    }
        
    else
    {
        automate->pushSymbole(new ExpDiv(t, f));
        automate->transitionReduction();
    }
        

    delete op;
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat33::Etat33 ( const Etat33 & unEtat33 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat33>" << endl;
#endif
} //----- Fin de Etat33 (constructeur de copie)


Etat33::Etat33 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat33>" << endl;
#endif
} //----- Fin de Etat33


Etat33::~Etat33 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat33>" << endl;
#endif
} //----- Fin de ~Etat33


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
