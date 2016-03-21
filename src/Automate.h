/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <Automate> (fichier Automate.h) ------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

#include <stack>
#include "Lexer.h"
#include "Etat/Etat.h"

class Automate
{
//----------------------------------------------------------------- PUBLIC
public:
    Automate (const string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation);
    virtual ~Automate ( );

    void lecture();
    void pushState(Etat * etat);
    void popState();
    void accepte();
    void rejette();
    void analyseStatique();

//------------------------------------------------------------------ PRIVE
private:
	Lexer * lexer;
	stack<Etat> pileEtats;
	stack<Symbole> pileSymboles;

};

#endif // AUTOMATE_H
