#include "ExpDiv.h"


ExpDiv::ExpDiv(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpDiv::~ExpDiv() { }

int ExpDiv::operation(int g, int d) {
	if(d==0) std::cerr << "Division par zero impossible" << endl;
   	return g/d;
}
