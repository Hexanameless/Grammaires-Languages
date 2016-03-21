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

    
//------------------------------------------------------------------ Types

enum e_symbole {
        VAR,
        CONST,
        ECRIRE,
        LIRE,
        VIRG,
        PV,
        ADD,
        SUB,
        MUL,
        DIV,
        AFF,
        EG,
        PO,
        PF,
		EP,
        DECL,
        VIDS,
        CIDS,
        INS,
        INSECRIRE,
        INSLIRE,
        INSAFFECTER,
        EXP,
        VAL,
        ID,
        DOLLAR,
        EXPBIN,
        EXPADD,
        EXPSUB,
        EXPMUL,
        EXPDIV,
        DEFAULT,
        ERROR
    };

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

    int getId ();
    // Mode d'emploi : renvoie l'id correspondant au symbole
    //
    // Contrat :
    //  

//------------------------------------------------- Surcharge d'opérateurs
//    Symbole & operator = ( const Symbole & unSymbole );
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
    Symbole();


    Symbole (int id);
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

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
    int idSymbole;

private:
//------------------------------------------------------- Attributs privés

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types publics
    

};

//----------------------------------------- Types dépendants de <Symbole>

#endif // SYMBOLE_H
