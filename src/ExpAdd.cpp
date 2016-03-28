#include "ExpAdd.h"

	ExpAdd::ExpAdd(Exp * g, Exp * d) : ExpBin(g,d) {
	}

	ExpAdd::~ExpAdd() {
	}

	double evaluation(const std::map<Id*,Exp*> & variables)
	{
		return (g->evaluation() + d->evaluation());
	}