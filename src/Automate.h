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
#include "Vids.h"
#include "Cids.h"

class Automate
{
//----------------------------------------------------------------- PUBLIC
public:
    Automate (const string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation);
    virtual ~Automate ( );

    void decalage();
    void pushEtat(Etat*);
    void pushSymbole(Symbole*);
    void transitionLecture();
    void transitionReduction();

    // void lecture();
    // //empile un état et lit le prochain symbole
    // void pushState(Etat * etat);
    // //empile un état mais ne lit pas le prochain symbole
    // void changeState(Etat * etat);
    // //Applique la transition avec un nouveau symbole
    // void transition(Symbole * symbole);

    void popEtat();
    Symbole * popSymbole();

    

    void accepte();
    void rejette();

//------------------------------------------------------------------ PRIVE
private:
	Lexer * lexer;
	stack<Etat*> pileEtats;
	stack<Symbole*> pileSymboles;
};

#endif // AUTOMATE_H
