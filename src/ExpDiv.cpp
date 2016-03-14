
#include "ExpDiv.h"
#include <cmath>


ExpDiv::ExpDiv(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpDiv::~ExpDiv() { }

double ExpDiv::operation(double g, double d) {
   return g/d;
}
