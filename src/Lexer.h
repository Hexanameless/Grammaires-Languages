/*************************************************************************
                           Lexer  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Interface de la classe <Lexer> (fichier Lexer.h) ------
#if ! defined ( LEXER_H )
#define LEXER_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>

using namespace std;

#include "Symbole.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Lexer>
//
//
//------------------------------------------------------------------------ 

class Lexer
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<string> parseProgramme(string programme);
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool is_number(const string & s);
    // Mode d'emploi : renvoie true si la string passée en paramètre est un entier
    //
    // Contrat :
    //

    string to_string();
    // Mode d'emploi : renvoie true si la string passée en paramètre est un entier
    //
    // Contrat :
    //

    Symbole getNext ();
    // Mode d'emploi : renvoie le prochain symbole de la grammaire
    //
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
    Lexer & operator = ( const Lexer & unLexer );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Lexer ( const Lexer & unLexer );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Lexer ( const string & programme);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Lexer ( );
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
    string programmeEnLecture;
    vector<string> symboles;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Lexer>

#endif // LEXER_H
