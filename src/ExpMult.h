#ifndef _EXPMULT_H
#define _EXPMULT_H

#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"

class ExpMult: public ExpBin {
   public:
      ExpMult(Exp * g, Exp * d);
      ~ExpMult();
   protected:
      double evaluation(const std::map<Id*,Exp*> & variables);
      Exp* optimisation();
};

#endif
