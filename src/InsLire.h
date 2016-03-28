#if ! defined ( INSLIRE_H )
#define INSLIRE_H

#include <list>
#include <string>

//--------------------------------------------------- Interfaces utilis��s
#include "Symbole.h"
#include "Ins.h"
#include "Id.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//
//
//------------------------------------------------------------------------

 class InsLire : public Ins
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M��thodes publiques
	std::string getNomId();
	void optimisationIns(){};
	void evaluationIns(std::map<Id*,Exp*> & variables);
	std::list<std::string> getListeId();
  void afficher();

//-------------------------------------------- Constructeurs - destructeur
	InsLire ( const InsLire & inslire );
	InsLire ( );
	InsLire (bool first);
	InsLire (Ins * prec, Id* aId);
  virtual ~InsLire ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M��thodes prot��g��es

private:
//------------------------------------------------------- M��thodes priv��es

protected:
//----------------------------------------------------- Attributs prot��g��s
    Id* nomId;

private:
//------------------------------------------------------- Attributs priv��s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv��es

//----------------------------------------------------------- Types priv��s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif // INSLIRE_H
