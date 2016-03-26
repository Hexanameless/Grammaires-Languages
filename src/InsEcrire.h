#if ! defined ( INSECRIRE_H )
#define INSECRIRE_H

#include <string>
#include <list>

#include "Symbole.h"
#include "Ins.h"
#include "Id.h"
#include "Exp.h"

 class InsEcrire : public Ins
{
//----------------------------------------------------------------- PUBLIC
public:
	void setExp(Exp *);
	void optimisationIns();

  	std::list<std::string> getListeId();
	void evaluationIns(const std::map<Id*,Exp*> & variables);

	InsEcrire & operator = ( const InsEcrire & unInsEcrire);

	InsEcrire ( const InsEcrire & InsEcrire );
	InsEcrire ( );
	
	//InsEcrire(Exp *);

	InsEcrire(Ins *, Exp *);


    virtual ~InsEcrire ( );

//------------------------------------------------------------------ PRIVE
protected:

	Exp * expEcrire;

};
#endif // INSECRIRE_H
