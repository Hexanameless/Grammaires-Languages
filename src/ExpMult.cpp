#include "ExpMult.h"
#include <cmath>


ExpMult::ExpMult(Exp * g, Exp* d) : ExpBin(g,d) { } 
ExpMult::~ExpMult() { }

double ExpMult::operation(double g, double d) {
   return g*d;
}

Val* ExpMul::OperationOptimisation(Val* gauche, Val* droite){
	double valG = gauche->valeur;
	double valD = droite->valeur;

	double res = operation(valG, valD);
	Val * valOpti = new Val(res);
	delete this;
	return valOpti;
}
