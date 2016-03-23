#ifndef _EXPADD_H
#define _EXPADD_H

#include "ExpBin.h"
#include "Exp.h"

class ExpAdd: public ExpBin {
   public:
      ExpAdd(Exp * g, Exp * d);
      ~ExpAdd();
   protected:
      int operation(int g, int d);
};



#endif
