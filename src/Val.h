#if ! defined ( VAL_H )
#define VAL_H
using namespace std;


//--------------------------------------------------- Interfaces utilis��s
#include "Symbole.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//
//
//------------------------------------------------------------------------

 class Val : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M��thodes publiques

//------------------------------------------------- Surcharge d'op��rateurs
    Val & operator = ( const Val & unVal);



//-------------------------------------------- Constructeurs - destructeur
    Val ( const Val & Val );

    Val ( );

    Val (int);

    virtual ~Val ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M��thodes prot��g��es

private:
//------------------------------------------------------- M��thodes priv��es

protected:
//----------------------------------------------------- Attributs prot��g��s
    int valeur;
private:
//------------------------------------------------------- Attributs priv��s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv��es

//----------------------------------------------------------- Types priv��s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif VAL_H

