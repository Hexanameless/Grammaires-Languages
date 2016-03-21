#ifndef _EXPADD_H
#define _EXPADD_H

#include <string>
#include <map>
#include "ExpBin.h"
#include "Exp.h"
using namespace std;

typedef map<string,double> Vars;

class ExpAdd: public ExpBin {
   public:
      ExpAdd(Exp * g, Exp * d);
      ~ExpAdd();
   protected:
      double operation(double g, double d);
};



#endif
