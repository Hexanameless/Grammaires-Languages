/*************************************************************************
                           Symbole  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Réalisation de la classe <Symbole> (fichier Symbole.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Symbole.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
int Symbole::getId ()
// Algorithme :
//
{
	return this->idSymbole;
} //----- Fin de Méthode getId()

void Symbole::afficher()
{
    switch (idSymbole)
    {
        case  VAR:
            cout << "var";
            break;
        case CONST:
            cout << "const";
            break;
        case ECRIRE:
            cout << "ecrire";
            break;
        case LIRE:
            cout << "lire";
            break;
        case AFFECTER:
            cout << ":=";
            break;
        case VIRG:
            cout << ",";
            break;
        case PV:
            cout << ";";
            break;
        case ADD:
            cout << "+";
            break;
        case SUB:
            cout << "-";
            break;
        case MUL:
            cout << "*";
            break;
        case DIV:
            cout << "/";
            break;
        case EG:
            cout << "=";
            break;
        case PO:
            cout << "(";
            break;
        case PF:
            cout << ")";
            break;
    }
}


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Symbole::Symbole ( const Symbole & unSymbole )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Symbole>" << endl;
#endif
    this->idSymbole = unSymbole.idSymbole;
} //----- Fin de Symbole (constructeur de copie)

Symbole::Symbole()
{
	this->idSymbole = DEFAULT;
}


Symbole::Symbole (int id)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Symbole>" << endl;
#endif

    this->idSymbole = id;

} //----- Fin de Symbole


Symbole::~Symbole ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Symbole>" << endl;
#endif
} //----- Fin de ~Symbole


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
