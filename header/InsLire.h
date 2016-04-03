#if ! defined ( INSLIRE_H )
#define INSLIRE_H

#include <list>
#include <string>

#include "Symbole.h"
#include "Ins.h"
#include "Id.h"

class InsLire : public Ins
{
//----------------------------------------------------------------- PUBLIC
public:
  InsLire ( const InsLire & inslire );
  InsLire ( );
  InsLire (bool first);
  InsLire (Ins * prec, Id* aId);
  virtual ~InsLire ( );

	std::string getNomId();
	void optimisationIns(std::map<std::string,Val*> & variables){};
	void evaluationIns(std::map<std::string,Exp*> & variables);
	std::list<std::string> getListeId();
  void afficher();

//------------------------------------------------------------------ PRIVE
protected:

  Id* nomId;

};

#endif // INSLIRE_H
