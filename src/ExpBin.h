#ifndef _EXPBIN_H
#define _EXPBIN_H

#include <string>
#include <map>
#include <list>

#include "Exp.h"
#include "Val.h"
#include "Id.h"

class ExpBin: public Exp {

   public:
      ExpBin(Exp * g, Exp * d);
      ~ExpBin();
      virtual double evaluation(const std::map<std::string,Exp*> & variables)=0;
      virtual Exp* optimisation(const std::map<std::string,Val*> & variables)=0;
      std::list<std::string> getListeId();

      virtual void afficher()=0;

   protected:
      Exp * gauche;
      Exp * droite;
};

#endif // EXPBIN_H
