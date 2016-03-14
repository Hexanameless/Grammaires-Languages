#if ! defined ( ID_H )
#define ID_H
using namespace std;

//--------------------------------------------------- Interfaces utilis��s
#include <string>
#include "Symbole.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//
//
//------------------------------------------------------------------------

 class Id : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M��thodes publiques

//------------------------------------------------- Surcharge d'op��rateurs
	 Id & operator = ( const Id & unId);



//-------------------------------------------- Constructeurs - destructeur
	Id ( const Id & Id );

	Id ( );

	Id (string);

    virtual ~Id ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M��thodes prot��g��es

private:
//------------------------------------------------------- M��thodes priv��es

protected:
//----------------------------------------------------- Attributs prot��g��s
    string nomId;
private:
//------------------------------------------------------- Attributs priv��s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv��es

//----------------------------------------------------------- Types priv��s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif ID_H
