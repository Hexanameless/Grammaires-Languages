#if ! defined ( INSECRIRE_H )
#define INSECRIRE_H
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

 class InsEcrire : public Ins
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M¨¦thodes publiques
	void setExp(Exp *);

	void optimisationIns();

	void evaluationIns(const std::map<Id,Exp*> & variables);

//------------------------------------------------- Surcharge d'op¨¦rateurs
	InsEcrire & operator = ( const InsEcrire & unInsEcrire);



//-------------------------------------------- Constructeurs - destructeur
	InsEcrire ( const InsEcrire & InsEcrire );


	InsEcrire ( );


	InsEcrire(Exp *);


    virtual ~InsEcrire ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es
	Exp * expEcrire;
private:
//------------------------------------------------------- M¨¦thodes priv¨¦es

protected:
//----------------------------------------------------- Attributs prot¨¦g¨¦s

private:
//------------------------------------------------------- Attributs priv¨¦s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv¨¦es

//----------------------------------------------------------- Types priv¨¦s

};

//----------------------------------------- Types dépendants de <${file_base}>

#endif // INSECRIRE_H

