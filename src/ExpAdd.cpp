#include "ExpAdd.h"
#include <cmath>

ExpAdd::ExpAdd(Exp * g, Exp * d) : ExpBin(g,d) {
}

ExpAdd::~ExpAdd() {
}

double ExpAdd::operation(double g, double d) {
   return g+d;
}

Val* ExpAdd::OperationOptimisation(Val* gauche, Val* droite){
	double valG = gauche->valeur;
	double valD = droite->valeur;

	double res = operation(valG, valD);
	Val * valOpti = new Val(res);
	delete this;
	return valOpti;
}