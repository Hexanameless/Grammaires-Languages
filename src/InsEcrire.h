#if ! defined ( INSECRIRE_H )
#define INSECRIRE_H

#include <string>
#include <list>

//--------------------------------------------------- Interfaces utilis��s
#include "Symbole.h"
#include "Ins.h"
#include "ExpBin.h"
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
//----------------------------------------------------- M��thodes publiques
	void setExp(Exp *);

	void optimisationIns();

  std::list<std::string> getListeId();

//------------------------------------------------- Surcharge d'op��rateurs
	InsEcrire & operator = ( const InsEcrire & unInsEcrire);



//-------------------------------------------- Constructeurs - destructeur
	InsEcrire ( const InsEcrire & InsEcrire );


	InsEcrire ( );


	InsEcrire(Exp *);


  virtual ~InsEcrire ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M��thodes prot��g��es
	Exp * expEcrire;
private:
//------------------------------------------------------- M��thodes priv��es

protected:
//----------------------------------------------------- Attributs prot��g��s

private:
//------------------------------------------------------- Attributs priv��s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv��es

//----------------------------------------------------------- Types priv��s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif // INSECRIRE_H
