#if ! defined ( INSAFFECTER_H )
#define INSAFFECTER_H

#include <list>
#include <string>

#include "Symbole.h"
#include "Ins.h"
#include "Id.h"
#include "Exp.h"

class InsAffecter : public Ins
{
//----------------------------------------------------------------- PUBLIC
public:

  InsAffecter ( const InsAffecter & InsAffecter );
  InsAffecter ();
  InsAffecter (bool first);
  InsAffecter (Ins *, Id *, Exp *);
  virtual ~InsAffecter ( );

  void setExp(Exp *);
  void optimisationIns(std::map<std::string,Val*> & variables);
  std::list<std::string> getListeId();
  std::string getNomId();
  void evaluationIns(std::map<std::string,Exp*> & variables);
  void afficher();

//------------------------------------------------------------------ PRIVE
protected:

  Id * nomId;
  Exp * expAffecter;

};

#endif // INSAFFECTER_H
