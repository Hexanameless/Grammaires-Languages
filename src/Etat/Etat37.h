/*************************************************************************
                           Etat37  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Etat37> (fichier Etat37.h) ------
#if ! defined ( ETAT37_H )
#define ETAT37_H

//--------------------------------------------------- Interfaces utilisées
#include "../Automate.h"
#include "../Symbole.h"
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat37>
//
//
//------------------------------------------------------------------------ 

class Etat37 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual Etat37 transition (Automate automate, Symbole symbole);
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
    Etat37 ( const Etat37 & unEtat37 );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat37 ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat37 ( );
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

#endif // ETAT37_H
