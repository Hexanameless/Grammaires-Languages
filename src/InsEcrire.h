#if ! defined ( INSECRIRE_H )
#define INSECRIRE_H

#include "Symbole.h"
#include "Ins.h"
#include "Id.h"
#include "ExpBin.h"

 class InsEcrire : public Ins
{
//----------------------------------------------------------------- PUBLIC
public:

	void setExp(Exp *);
	void optimisationIns();

	InsEcrire & operator = ( const InsEcrire & unInsEcrire);

	InsEcrire ( const InsEcrire & InsEcrire );
	InsEcrire ( );
	InsEcrire(Exp *);
  virtual ~InsEcrire ( );

//------------------------------------------------------------------ PRIVE
protected:

	Exp * expEcrire;

};

#endif // INSECRIRE_H
