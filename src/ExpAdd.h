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
      double evaluation(const std::map<std::string,Exp*> & variables);
      Exp* optimisation(const std::map<std::string,Val*> & variables);
      
      void afficher();
};

#endif
