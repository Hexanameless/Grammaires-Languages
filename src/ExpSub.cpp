#include "ExpSub.h"
#include <cmath>

ExpSub::ExpSub(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpSub::~ExpSub() { }

double ExpSub::operation(double g, double d) {
   return g-d;
}


