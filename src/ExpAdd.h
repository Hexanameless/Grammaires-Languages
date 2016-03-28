#ifndef _EXPADD_H
#define _EXPADD_H

#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"

class ExpAdd: public ExpBin {
   public:
      ExpAdd(Exp * g, Exp * d);
      ~ExpAdd();

   protected:
      double evaluation(const std::map<Id*,Exp*> & variables);
      Exp* optimisation();
      
      void afficher();
};

#endif
