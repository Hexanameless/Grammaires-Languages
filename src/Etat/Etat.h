/*************************************************************************
                           Etat  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Etat> (fichier Etat.h) ------
#if ! defined ( ETAT_H )
#define ETAT_H

//--------------------------------------------------- Interfaces utilisées
#include "../Symbole.h"
#include "../Lexer.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
class Automate;
//------------------------------------------------------------------------
// Rôle de la classe <Etat>
//
//
//------------------------------------------------------------------------

class Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual void transition (Automate* const automate, Symbole* symbole) = 0;
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------- Surcharge d'opérateurs
//    Etat & operator = ( const Etat & unEtat);
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    Etat ( const Etat & unEtat );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat ( );
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

#endif // ETAT_H