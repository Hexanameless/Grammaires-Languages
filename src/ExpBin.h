#ifndef _EXPBIN_H
#define _EXPBIN_H

#include <string>
#include <map>
#include <list>

#include "Exp.h"
#include "Val.h"


class ExpBin: public Exp {
   // un opérateur binaire générique, pour l'implémenter, il faut
   // implémenter la méthode operation()
   public:
      ExpBin(Exp * g, Exp * d);
      ~ExpBin();
      double Evaluation(const Vars & variables);
      Exp* optimisation();
      std::list<string> getListeId();

   protected:
      virtual double operation(double g, double d) = 0;
      virtual Val* operationOptimisation(Val* gauche, Val* droite);
      Exp * gauche;
      Exp * droite;
};

#endif // EXPBIN_H
