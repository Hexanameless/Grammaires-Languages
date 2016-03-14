#if ! defined ( INSAFFECTER_H )
#define INSAFFECTER_H
using namespace std;

//--------------------------------------------------- Interfaces utilis¨¦s
#include "Symbole.h"
#include "Ins.h"
#include "Id.h"
#include "Exp.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//
//
//------------------------------------------------------------------------

 class InsAffecter : public Ins
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M¨¦thodes publiques

//------------------------------------------------- Surcharge d'op¨¦rateurs



//-------------------------------------------- Constructeurs - destructeur
	InsAffecter ( const InsAffecter & InsAffecter );
	InsAffecter ();
	InsAffecter (Id, Exp);
    virtual ~InsAffecter ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

private:
//------------------------------------------------------- M¨¦thodes priv¨¦es

protected:
//----------------------------------------------------- Attributs prot¨¦g¨¦s
    Id nomId;
    Exp expAffecter;
private:
//------------------------------------------------------- Attributs priv¨¦s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv¨¦es

//----------------------------------------------------------- Types priv¨¦s

};

//----------------------------------------- Types dépendants de <${file_base}>

#endif // INSAFFECTER_H
