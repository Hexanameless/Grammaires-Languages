#ifndef _EXPDIV_H
#define _EXPDIV_H

#include "ExpBin.h"
#include "Exp.h"
#include "Val.h"

class ExpDiv: public ExpBin {
public:

  ExpDiv(Exp * g, Exp * d);
  ~ExpDiv();

protected:

  double evaluation(const std::map<std::string,Exp*> & variables);
  Exp* optimisation(const std::map<std::string,Val*> & variables);
  void afficher();
};

#endif
