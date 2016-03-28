/*************************************************************************
                           Ins  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par Y. Tang
*************************************************************************/

//---------- Interface de la classe <Ins> (fichier Ins.h) ------
#if ! defined ( INS_H )
#define INS_H

#include "Symbole.h"
#include "Id.h"
#include "Exp.h"

 class Ins : public Symbole
{
//----------------------------------------------------------------- PUBLIC
public:

  Ins & operator = ( const Ins & unIns);

  Ins ( const Ins & Ins );
  Ins ( );
  virtual ~Ins ( );

  virtual void optimisationIns()=0;
  virtual void evaluationIns(std::map<Id*,Exp*> & variables)=0;
  virtual std::string getNomId()=0;
  virtual std::list<std::string> getListeId()=0;

  Ins* getPrecIns();
  int getType();

//------------------------------------------------------------------ PRIVE
protected:

private:
//------------------------------------------------------- M��thodes priv��es

protected:
//----------------------------------------------------- Attributs prot��g��s

Ins * precedenteIns;
int type;

};

#endif // INS_H
