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
      virtual ~Exp();
      
      virtual double evaluation(const std::map<Id*,Exp*> & variables);
      virtual Exp* optimisation();
      virtual std::list<std::string> getListeId();
};

#endif // EXP_H
