#include "ExpAdd.h"
#include <cmath>

ExpAdd::ExpAdd(Exp * g, Exp * d) : ExpBin(g,d) {
}

ExpAdd::~ExpAdd() {
}

double ExpAdd::operation(double g, double d) {
   return g+d;
}
