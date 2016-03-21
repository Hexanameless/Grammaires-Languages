
#include "ExpDiv.h"
#include <cmath>


ExpDiv::ExpDiv(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpDiv::~ExpDiv() { }

double ExpDiv::operation(double g, double d) {
	if(d==0) std::cerr << "Division par zero impossible" << endl;
   return g/d;
}

Val* ExpMul::OperationOptimisation(Val* gauche, Val* droite){
	double valG = gauche->valeur;
	double valD = droite->valeur;

	double res = operation(valG, valD);
	Val * valOpti = new Val(res);
	delete this;
	return valOpti;
}
