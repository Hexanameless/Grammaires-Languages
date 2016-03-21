#ifndef _EXPDIV_H
#define _EXPDIV_H

#include <string>
#include <map>
using namespace std;

typedef map<string,double> Vars;


class ExpDiv: public ExpBin {
   public:
      ExpDiv(Exp * g, Exp * d);
      ~ExpDiv();
   protected:
      double operation(double g, double d);
      Val* OperationOptimisation(Val* gauche, Val* droite);
};





#endif
