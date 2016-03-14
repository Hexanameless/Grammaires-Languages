/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : ${date}
    copyright            : (C) 2016 par S.MANKAI
*************************************************************************/

//---------- Interface de la classe <ExpAdd> (fichier ExpAdd.h) ------
#if ! defined ( EXPBIN_H )
#define EXPBIN_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ExpBin>
//
//
//------------------------------------------------------------------------ 

class ExpAdd : public ExpBin : 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    
     
    void Evaluation(){};
    // type Méthode ( liste de paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //




//-------------------------------------------- Constructeurs - destructeur
    Exp ( const ExpAdd & unExpAdd );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpAdd ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ExpAdd ( );
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

//----------------------------------------- Types dépendants de <Automate>

#endif // EXPADD_H


