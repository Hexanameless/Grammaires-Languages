#ifndef _EXPSUB_H
#define _EXPSUB_H

#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"

class ExpSub: public ExpBin {
   public:
      ExpSub(Exp * g, Exp * d);
      ~ExpSub();
   protected:
      double evaluation(const std::map<std::string,Exp*> & variables);
      Exp* optimisation(const std::map<std::string,Val*> & variables);

      void afficher();
};



#endif
