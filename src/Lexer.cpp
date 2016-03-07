/*************************************************************************
                           Lexer  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Réalisation de la classe <Lexer> (fichier Lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <string>
#include <iostream>
using namespace std;

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
	char charCourant = '';
	string symboleCourant = "";

	for(i=0; this->programmeEnLecture.length(); i++)
	{
		charCourant = this->programmeEnLecture[i];

		cout << "charCourant = " << charCourant << endl;

		symboleCourant += charCourant;

		cout << "symboleCourant = " << symboleCourant << endl;



		if(charCourant==' '
			|| charCourant==','
			|| charCourant==';'
			|| charCourant=='+'
			|| charCourant=='-'
			|| charCourant=='*'
			|| charCourant=='/'
			|| charCourant=='='
			|| charCourant=='('
			|| charCourant==')') {

			switch(symboleCourant)
			{
				case 'var' :
					Automate::transition(e_symbole::Var);
					break;
				case 'const' :
					Automate::transition(e_symbole::Const);
					break;
				case 'ecrire' :
					Automate::transition(e_symbole::Ecrire);
					break;
				case 'lire' :
					Automate::transition(e_symbole::Lire);
					break;
				case ',' :
					Automate::transition(e_symbole::Virg);
					break;
				case ';' :
					Automate::transition(e_symbole::Pv);
					break;
				case '+' :
					Automate::transition(e_symbole::Add);
					break;
				case '-' :
					Automate::transition(e_symbole::Sub);
					break;
				case '*' :
					Automate::transition(e_symbole::Mul);
					break;
				case '/' :
					Automate::transition(e_symbole::Div);
					break;
				case ':=' :
					Automate::transition(e_symbole::Aff);
					break;
				case '=' :
					Automate::transition(e_symbole::Eg);
					break;
				case '(' :
					Automate::transition(e_symbole::Po);
					break;
				case ')' :
					Automate::transition(e_symbole::Pf);
					break;
				default :
					Automate::transition(e_symbole::Id);
					break;
			}

			symboleCourant = "";

		}

	}

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


Lexer::Lexer ( string programme )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Lexer>" << endl;
#endif

    this->programmeEnLecture = programme;
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
