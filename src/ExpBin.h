/*************************************************************************
                           Automate  -  description
                             -------------------
    début                : ${date}
    copyright            : (C) 2016 par S.MANKAI
*************************************************************************/

//---------- Interface de la classe <Exp> (fichier ExpBin.h) ------
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

class ExpBin : public Exp : 
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
    Exp ( const ExpBin & unExpBin );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ExpBin ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ExpBin ( );
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

#endif // EXPBIN_H
