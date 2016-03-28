#ifndef _EXPDIV_H
#define _EXPDIV_H

#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"

class ExpDiv: public ExpBin {
   public:
      ExpDiv(Exp * g, Exp * d);
      ~ExpDiv();
   protected:
      double evaluation(const std::map<Id*,Exp*> & variables);
      //Val* operationOptimisation(Val* gauche, Val* droite);
};

#endif
