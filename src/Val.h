#if ! defined ( VAL_H )
#define VAL_H

#include <list>
#include <string>

#include "Exp.h"

 class Val : public Exp
 {
//----------------------------------------------------------------- PUBLIC

public:

	double getValeur();
	Val* optimisation();
  	std::list<std::string> getListeId();
	virtual double evaluation(const std::map<Id*,Exp*> & variables);


    Val ( const Val & Val );

    Val ( );

    Val (int);

    Val (double);

    virtual ~Val ( );

//------------------------------------------------------------------ PRIVE

protected:
    double valeur;

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif // VAL_H
