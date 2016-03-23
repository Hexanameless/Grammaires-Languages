#ifndef _EXPSUB_H
#define _EXPSUB_H

#include "ExpBin.h"

class ExpSub: public ExpBin {
   public:
      ExpSub(Exp * g, Exp * d);
      ~ExpSub();
   protected:
      int operation(int g, int d);
};



#endif
