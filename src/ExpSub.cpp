#include "ExpSub.h"
#include <cmath>

ExpSub::ExpSub(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpSub::~ExpSub() { }

double ExpSub::operation(double g, double d) {
   return g-d;
}

Val* ExpSub::operationOptimisation(Val* gauche, Val* droite){
	double valG = gauche->getValeur();
	double valD = droite->getValeur();

	double res = operation(valG, valD);
	Val * valOpti = new Val(res);
	delete this;
	return valOpti;
}

