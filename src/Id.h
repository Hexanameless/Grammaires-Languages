#if ! defined ( ID_H )
#define ID_H

//--------------------------------------------------- Interfaces utilis��s
#include <string>
#include <list>

#include "Exp.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//
//
//------------------------------------------------------------------------

 class Id : public Exp
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M��thodes publiques
  	std::list<std::string> getListeId();
  	std::string getNomId();
	virtual double evaluation(const std::map<Id,Exp*> & variables);

	string getNomId();

//------------------------------------------------- Surcharge d'op��rateurs
	 bool operator<(const Id & second) const;

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

#endif // ID_H
