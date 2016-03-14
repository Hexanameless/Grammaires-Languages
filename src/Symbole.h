/*************************************************************************
                           Symbole  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Interface de la classe <Symbole> (fichier Symbole.h) ------
#if ! defined ( SYMBOLE_H )
#define SYMBOLE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes
    enum e_symbole {
        Var,
        Const,
        Ecrire,
        Lire,
        Virg,
        Pv,
        Add,
        Sub,
        Mul,
        Div,
        Aff,
        Eg,
        Po,
        Pf,
        P,
        Decl,
        Vids,
        Cids,
        Ins,
        // InsEcrire,
        // InsLire,
        // InsAffecter,
        Exp,
        Val,
        Id,
        Dollar,
        // ExpAdd,
        // ExpSub,
        // ExpMul,
        // ExpDiv
    };

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Symbole>
//
//
//------------------------------------------------------------------------

class Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Symbole & operator = ( const Symbole & unSymbole );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Symbole ( const Symbole & unSymbole );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Symbole (e_symbole id);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Symbole ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

    e_symbole getId ();
    // Mode d'emploi : renvoie l'id correspondant au symbole
    //
    // Contrat :
    //

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
    e_symbole idSymbole;

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Symbole>

#endif // SYMBOLE_H
