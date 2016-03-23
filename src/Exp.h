#ifndef _EXP_H
#define _EXP_H

#include <string>
#include <map>

#include "Symbole.h"

typedef map<string,double> Vars;

class Exp : public Symbole
{
   public:
      Exp();
      virtual ~Exp();
      virtual double Evaluation(const Vars & variables) = 0;

      virtual Exp* optimisation();
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
