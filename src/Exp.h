#ifndef _EXP_H
#define _EXP_H

#include <string>
#include <map>
#include <list>

#include "Symbole.h"

class Id;

class Exp : public Symbole
{
   public:
      Exp();
      Exp(int);
      virtual ~Exp();
      
      virtual double evaluation(const std::map<Id*,Exp*> & variables) = 0;
      virtual Exp* optimisation();
      virtual std::list<std::string> getListeId()=0;
};

#endif // EXP_H
