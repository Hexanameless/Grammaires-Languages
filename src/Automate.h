/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <Automate> (fichier Automate.h) ------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

//--------------------------------------------------- Interfaces utilisées
#include <stack>
#include "Lexer.h"
#include "Etat/Etat.h"
#include "Vids.h"
#include "Cids.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Automate>
//
//
//------------------------------------------------------------------------

class Automate
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void lecture();
    // Mode d'emploi :
    //
    // Contrat :
    //

    void pushState(Etat * etat);
    // Mode d'emploi :
    //
    // Contrat :
    //

    void popState();
    // Mode d'emploi :
    //
    // Contrat :
    //

    void transition(Symbole symbole);
    // Mode d'emploi :
    //
    // Contrat :
    //    

    void addVar();
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    void addConst();
    // Mode d'emploi :
    //
    // Contrat :
    //

    void affConst();
    // Mode d'emploi :
    //
    // Contrat :
    //

    void lireVar();
    // Mode d'emploi :
    //
    // Contrat :
    //

    void accepte();
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    void rejette();
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
//    Automate & operator = ( const Automate & unAutomate );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Automate (const string & prog, bool affichage, bool analyseStatique, bool execution, bool transformation);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Automate ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
	Lexer * lexer;
	stack<Etat> pileEtats;
	stack<Symbole> pileSymboles;
    Vids vids;
    Cids cids;
    Id* idActuel;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Automate>

#endif // AUTOMATE_H
