#ifndef _EXPDIV_H
#define _EXPDIV_H

#include <string>
#include <map>
#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"
using namespace std;

typedef map<string,double> Vars;


class ExpDiv: public ExpBin {
   public:
      ExpDiv(Exp * g, Exp * d);
      ~ExpDiv();
   protected:
      double operation(double g, double d);
      Val* operationOptimisation(Val* gauche, Val* droite);
};





#endif
