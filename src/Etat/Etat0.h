/*************************************************************************
                           Etat0  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Etat0> (fichier Etat0.h) ------
#if ! defined ( ETAT0_H )
#define ETAT0_H

//--------------------------------------------------- Interfaces utilisées
#include "Etat.h"
#include "../Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 
class Automate;
//------------------------------------------------------------------------ 
// Rôle de la classe <Etat0>
//
//
//------------------------------------------------------------------------ 

class Etat0 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual Etat0 transition (Automate automate, Symbole symbole);
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
    Lexer & operator = ( const Etat & unEtat);
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    Etat0 ( const Etat0 & unEtat0 );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat0 ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat0 ( );
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

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Lexer>

#endif // ETAT0_H
