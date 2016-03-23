#include "ExpMult.h"

ExpMult::ExpMult(Exp * g, Exp* d) : ExpBin(g,d) { } 
ExpMult::~ExpMult() { }

double ExpMult::operation(double g, double d) {
   return g*d;
}