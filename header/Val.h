#if ! defined ( VAL_H )
#define VAL_H

#include <list>
#include <string>

#include "Exp.h"

class Val : public Exp
{
//----------------------------------------------------------------- PUBLIC
public:

  Val ( const Val & Val );
  Val ( );
  Val (int);
  Val (double);
  virtual ~Val ( );

	double getValeur();
	Exp* optimisation(const std::map<std::string,Val*> & variables);
  std::list<std::string> getListeId();
  void afficher();
	virtual double evaluation(const std::map<std::string,Exp*> & variables);

//------------------------------------------------------------------ PRIVE
protected:

    double valeur;

};

#endif // VAL_H
