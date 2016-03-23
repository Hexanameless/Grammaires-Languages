#ifndef _EXPDIV_H
#define _EXPDIV_H

#include "ExpBin.h"
#include "Exp.h"


class ExpDiv: public ExpBin {
   public:
      ExpDiv(Exp * g, Exp * d);
      ~ExpDiv();
   protected:
      int operation(int g, int d);
};

#endif
