#ifndef _EXP_H
#define _EXP_H

#include <string>
#include <map>
#include "Symbole.h"
using namespace std;

class Exp :
   public Symbole {
   public:
      Exp();
      virtual ~Exp();
};

#endif // EXP_H

