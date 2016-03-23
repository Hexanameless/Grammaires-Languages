#include "ExpAdd.h"

ExpAdd::ExpAdd(Exp * g, Exp * d) : ExpBin(g,d) {
}

ExpAdd::~ExpAdd() {
}

int ExpAdd::operation(int g, int d) {
   return g+d;
}