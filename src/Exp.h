#ifndef _EXP_H
#define _EXP_H

#include <string>
#include <map>
#include <list>

#include "Symbole.h"

class Id;
class Val;

class Exp : public Symbole
{
   public:
      Exp();
      virtual ~Exp();

      virtual double evaluation(const std::map<std::string,Exp*> & variables)=0;
      virtual Exp* optimisation(const std::map<std::string,Val*> & variables)=0;
      virtual std::list<std::string> getListeId()=0;
      virtual void afficher()=0;
};

#endif // EXP_H
