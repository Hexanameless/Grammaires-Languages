/*************************************************************************
                           Ins  -  description
                             -------------------
    d�but                : 07/03/2016
    copyright            : (C) 2016 par Y. Tang
*************************************************************************/

//---------- Interface de la classe <Ins> (fichier Ins.h) ------
#if ! defined ( INS_H )
#define INS_H
using namespace std;


//--------------------------------------------------- Interfaces utilis��s
#include "Symbole.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//
//
//------------------------------------------------------------------------

 class Ins : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M��thodes publiques

//------------------------------------------------- Surcharge d'op��rateurs
    Ins & operator = ( const Ins & unIns);



//-------------------------------------------- Constructeurs - destructeur
    Ins ( const Ins & Ins );

    Ins ( );

    virtual ~Ins ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M��thodes prot��g��es

private:
//------------------------------------------------------- M��thodes priv��es

protected:
//----------------------------------------------------- Attributs prot��g��s

Ins * precedenteIns;

private:
//------------------------------------------------------- Attributs priv��s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv��es

//----------------------------------------------------------- Types priv��s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif // INS_H
