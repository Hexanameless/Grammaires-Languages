#ifndef _EXPMULT_H
#define _EXPMULT_H

#include <string>
#include <map>
#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"
using namespace std;

typedef map<string,double> Vars;

class ExpMult: public ExpBin {
   public:
      ExpMult(Exp * g, Exp * d);
      ~ExpMult();
   protected:
      double operation(double g, double d);
      Val* operationOptimisation(Val* gauche, Val* droite);
};



#endif
