#include "ExpSub.h"

	ExpSub::ExpSub(Exp * g, Exp * d) : ExpBin(g,d) { } 
	ExpSub::~ExpSub() { }

/*	double ExpSub::operation(double g, double d) {
	   return g-d;
	}*/

	double ExpSub::evaluation(const std::map<Id*,Exp*> & variables)
	{
		return (gauche->evaluation(variables) - droite->evaluation(variables));
	}

	Val* ExpSub::operationOptimisation(Val* gauche, Val* droite){
		double valG = gauche->getValeur();
		double valD = droite->getValeur();

		double res = operation(valG, valD);
		Val * valOpti = new Val(res);
		delete this;
		return valOpti;
	}
