#ifndef _EXPBIN_H
#define _EXPBIN_H

#include "Exp.h"

class ExpBin: public Exp {
   // un opérateur binaire générique, pour l'implémenter, il faut 
   // implémenter la méthode operation()
   public:
      ExpBin(Exp * g, Exp * d);
      ~ExpBin();
      
   protected:
      Exp * gauche;
      Exp * droite;
};

#endif // EXPBIN_H

