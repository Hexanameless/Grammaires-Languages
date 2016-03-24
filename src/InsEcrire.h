#if ! defined ( INSECRIRE_H )
#define INSECRIRE_H

#include <string>
#include <list>

#include "Symbole.h"
#include "Ins.h"
#include "ExpBin.h"

 class InsEcrire : public Ins
{
//----------------------------------------------------------------- PUBLIC
public:
	void setExp(Exp *);

	void setExp(Exp *);
	void optimisationIns();

  std::list<std::string> getListeId();


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
