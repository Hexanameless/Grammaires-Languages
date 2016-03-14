/*************************************************************************
                           Id  -  description
                             -------------------
    début                : 14 mars 2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Interface de la classe <Id> (fichier Id.h) ------
#if ! defined ( ID_H )
#define ID_H

//--------------------------------------------------- Interfaces utilisées
#include<string>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Id>
//
//
//------------------------------------------------------------------------

using namespace std;
class Id : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    affecter (int val);
    // Mode d'emploi :
    //
    // Contrat :
    //

    int getValeur ();
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Id & operator = ( const Id & unId );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Id (string nomVariable);
    // Mode d'emploi :
    //
    // Contrat :
    //

    Id ( const Id & unId );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Id ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Id ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées
string nom;
int valeur;
protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Id>

#endif // ID_H
