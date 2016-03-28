#ifndef _EXPBIN_H
#define _EXPBIN_H

#include <string>
#include <map>
#include <list>

#include "Exp.h"
#include "Val.h"
#include "Id.h"

class ExpBin: public Exp {

   public:
      ExpBin(Exp * g, Exp * d);
      ~ExpBin();
      virtual double evaluation(const std::map<Id*,Exp*> & variables)=0;
      virtual Exp* optimisation()=0;
      std::list<std::string> getListeId();

   protected:
      //virtual double operation(double g, double d) = 0;
      virtual Val* operationOptimisation(Val* gauche, Val* droite);

      Exp * gauche;
      Exp * droite;
};

#endif // EXPBIN_H
