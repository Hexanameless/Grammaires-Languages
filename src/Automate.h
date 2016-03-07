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
    
    void pushState(Etat etat);
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    void popState(Etat etat);
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Automate & operator = ( const Automate & unAutomate );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Automate ( const Automate & unAutomate );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Automate ( );
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
	Lexer lexer;
	stack<Etat> pileEtats;
	stack<Symbole> pileSymboles;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Automate>

#endif // AUTOMATE_H
