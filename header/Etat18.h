/*************************************************************************
                           Etat18  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Etat18> (fichier Etat18.h) ------
#if ! defined ( ETAT18_H )
#define ETAT18_H

//--------------------------------------------------- Interfaces utilisées
#include "Automate.h"
 
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat18>
//
//
//------------------------------------------------------------------------ 

class Etat18 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual void transition (Automate* const automate, Symbole* symbole);
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
    
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    Etat18 ( const Etat18 & unEtat18 );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat18 ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat18 ( );
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

#endif // ETAT18_H
