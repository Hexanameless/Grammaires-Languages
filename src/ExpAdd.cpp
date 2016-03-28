#include "ExpAdd.h"

	ExpAdd::ExpAdd(Exp * g, Exp * d) : ExpBin(g,d) {
	}

	ExpAdd::~ExpAdd() {
	}

	double ExpAdd::evaluation(const std::map<Id*,Exp*> & variables)
	{
		return (gauche->evaluation(variables) + droite->evaluation(variables));
	}