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
      double operation(double g, double d);
      Val* operationOptimisation(Val* gauche, Val* droite);
};

#endif
