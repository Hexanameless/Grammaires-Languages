#ifndef _EXPBIN_H
#define _EXPBIN_H

#include <string>
#include <map>
#include "Exp.h"
using namespace std;

typedef map<string,double> Vars;




class ExpBin: public Exp {
   // un opérateur binaire générique, pour l'implémenter, il faut 
   // implémenter la méthode operation()
   public:
      ExpBin(Exp * g, Exp * d);
      ~ExpBin();
      double Evaluation(const Vars & variables);
   protected:
      virtual double operation(double g, double d) = 0;
      Exp * gauche;
      Exp * droite;
};

#endif // EXPBIN_H

