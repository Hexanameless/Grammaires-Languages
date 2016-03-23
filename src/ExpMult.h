#ifndef _EXPMULT_H
#define _EXPMULT_H

#include "ExpBin.h"

class ExpMult: public ExpBin {
   public:
      ExpMult(Exp * g, Exp * d);
      ~ExpMult();
   protected:
      int operation(int g, int d);
};



#endif
