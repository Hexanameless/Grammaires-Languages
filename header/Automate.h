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
#include "Etat.h"
#include "Vids.h"
#include "Cids.h"

class Automate
{
//----------------------------------------------------------------- PUBLIC
public:
    Automate (const std::string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation);
    virtual ~Automate ( );

    void decalage();
    void pushEtat(Etat*);
    void pushSymbole(Symbole*);
    void transitionLecture();
    void transitionReduction();
    void popEtat();
    Symbole * popSymbole();
    void accepte();
    void rejette();
    void afficherSuivant();

//------------------------------------------------------------------ PRIVE
private:
	Lexer * lexer;
	std::stack<Etat*> pileEtats;
	std::stack<Symbole*> pileSymboles;
};

#endif // AUTOMATE_H
