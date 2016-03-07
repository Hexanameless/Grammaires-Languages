/*************************************************************************
                           Lexer  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Réalisation de la classe <Lexer> (fichier Lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Lexer.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Symbole Lexer::getNext ()
// Algorithme :
//
{
} //----- Fin de Méthode getNext()


//------------------------------------------------- Surcharge d'opérateurs
Lexer & Lexer::operator = ( const Lexer & unLexer )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Lexer::Lexer ( const Lexer & unLexer )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lexer>" << endl;
#endif
} //----- Fin de Lexer (constructeur de copie)


Lexer::Lexer ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Lexer>" << endl;
#endif
} //----- Fin de Lexer


Lexer::~Lexer ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Lexer>" << endl;
#endif
} //----- Fin de ~Lexer


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
