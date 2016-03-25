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
      
      virtual double evaluation(const std::map<Id,Exp*> & variables) = 0;
      virtual Exp* optimisation();
      virtual std::list<std::string> getListeId()=0;
};

/*class Val: public Exp {
   // une expression composée uniquement d'une valeur double
   public:
      Val(int val);
      Val(double val);
      ~Val();
      double Evaluation(const Vars & variables);
   protected:
      double val;
};

class Id: public Exp {
   // une expression composée uniquement d'une variable
   public:
      Id (string n);
      ~Id ();
      double Evaluation(const Vars & variables);
   protected:
      string nom;
};*/

#endif // EXP_H
