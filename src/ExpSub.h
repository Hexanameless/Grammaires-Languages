#ifndef _EXPSUB_H
#define _EXPSUB_H

#include <string>
#include <map>
using namespace std;

typedef map<string,double> Vars;




class ExpSub: public ExpBin {
   public:
      ExpSub(Exp * g, Exp * d);
      ~ExpSub();
   protected:
      double operation(double g, double d);
      Val* OperationOptimisation(Val* gauche, Val* droite);
};



#endif
