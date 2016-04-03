/*************************************************************************
                           Etat9  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Etat9> (fichier Etat9.h) ------
#if ! defined ( ETAT9_H )
#define ETAT9_H

//--------------------------------------------------- Interfaces utilisées
#include "Automate.h"
 
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat9>
//
//
//------------------------------------------------------------------------ 

class Etat9 : public Etat
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
    Etat9 ( const Etat9 & unEtat9 );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat9 ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat9 ( );
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

#endif // ETAT9_H
