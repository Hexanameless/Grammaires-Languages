/*************************************************************************
                           Etat19  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Etat19> (fichier Etat19.h) ------
#if ! defined ( ETAT19_H )
#define ETAT19_H

//--------------------------------------------------- Interfaces utilisées
#include "../Automate.h"
#include "../Symbole.h"
#include "Etat.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Etat19>
//
//
//------------------------------------------------------------------------ 

class Etat19 : public Etat
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual Etat19 transition (Automate automate, Symbole symbole);
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
    Etat19 ( const Etat19 & unEtat19 );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Etat19 ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Etat19 ( );
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

#endif // ETAT19_H
