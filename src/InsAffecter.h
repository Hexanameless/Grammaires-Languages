#if ! defined ( INSAFFECTER_H )
#define INSAFFECTER_H

#include <list>
#include <string>

//--------------------------------------------------- Interfaces utilis��s
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
//----------------------------------------------------- M��thodes publiques
	void setExp(Exp *);

	void optimisationIns();
  std::list<std::string> getListeId();
  std::string getNomId();
	void evaluationIns(std::map<Id,Exp*> & variables);

//------------------------------------------------- Surcharge d'op��rateurs

//-------------------------------------------- Constructeurs - destructeur
	InsAffecter ( const InsAffecter & InsAffecter );
	InsAffecter ();
	InsAffecter (Id, Exp *);
  virtual ~InsAffecter ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M��thodes prot��g��es

private:
//------------------------------------------------------- M��thodes priv��es

protected:
//----------------------------------------------------- Attributs prot��g��s
    Id nomId;
    Exp * expAffecter;
private:
//------------------------------------------------------- Attributs priv��s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv��es

//----------------------------------------------------------- Types priv��s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif // INSAFFECTER_H
