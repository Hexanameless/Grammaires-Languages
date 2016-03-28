#include "ExpAdd.h"

	ExpAdd::ExpAdd(Exp * g, Exp * d) : ExpBin(g,d) {
	}

	ExpAdd::~ExpAdd() {
	}

	double ExpAdd::operation(double g, double d)
    {
        return g+d;
    }


    Val* ExpAdd::operationOptimisation(Val* gauche, Val* droite)
    {
        double valG = gauche->getValeur();
        double valD = droite->getValeur();

        double res = operation(valG, valD);
        Val * valOpti = new Val(res);
        delete this;
        return valOpti;
    }
