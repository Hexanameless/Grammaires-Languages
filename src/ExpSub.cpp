#include "ExpSub.h"

ExpSub::ExpSub(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpSub::~ExpSub() { }

int ExpSub::operation(int g, int d) {
   return g-d;
}