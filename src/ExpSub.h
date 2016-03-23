#ifndef _EXPSUB_H
#define _EXPSUB_H

#include <string>
#include <map>
#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"
using namespace std;

typedef map<string,double> Vars;




class ExpSub: public ExpBin {
   public:
      ExpSub(Exp * g, Exp * d);
      ~ExpSub();
   protected:
      double operation(double g, double d);
      Val* operationOptimisation(Val* gauche, Val* droite);
};



#endif
