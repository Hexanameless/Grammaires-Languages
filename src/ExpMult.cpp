#include "ExpMult.h"
#include <cmath>


ExpMult::ExpMult(Exp * g, Exp* d) : ExpBin(g,d) { } 
ExpMult::~ExpMult() { }

double ExpMult::operation(double g, double d) {
   return g*d;
}

Val* ExpMult::operationOptimisation(Val* gauche, Val* droite){
	double valG = gauche->getValeur();
	double valD = droite->getValeur();

	double res = operation(valG, valD);
	Val * valOpti = new Val(res);
	delete this;
	return valOpti;
}
