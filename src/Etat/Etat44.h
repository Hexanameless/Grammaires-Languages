/*************************************************************************
                           Etat44  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Etat44> (fichier Etat44.h) ------
#if ! defined ( ETAT44_H )
#define ETAT44_H

//--------------------------------------------------- Interfaces utilisées
#include "../Automate.h"
#include "../Symbole.h"
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat44>
//
//
//------------------------------------------------------------------------ 

class Etat44 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual Etat44 transition (Automate automate, Symbole symbole);
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
    Etat44 ( const Etat44 & unEtat44 );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat44 ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat44 ( );
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

#endif // ETAT44_H
