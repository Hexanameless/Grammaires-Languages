#include "ExpSub.h"
#include <cmath>

ExpSub::ExpSub(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpSub::~ExpSub() { }

double ExpSub::operation(double g, double d) {
   return g-d;
}

Val* ExpSub::OperationOptimisation(Val* gauche, Val* droite){
	double valG = gauche->valeur;
	double valD = droite->valeur;

	double res = operation(valG, valD);
	Val * valOpti = new Val(res);
	delete this;
	return valOpti;
}

