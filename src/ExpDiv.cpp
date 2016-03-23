#include <iostream>
#include "ExpDiv.h"
#include <cmath>
using namespace std;

ExpDiv::ExpDiv(Exp * g, Exp * d) : ExpBin(g,d) { } 
ExpDiv::~ExpDiv() { }

double ExpDiv::operation(double g, double d) {
	if(d==0) std::cout << "Division par zero impossible" << endl;
   return g/d;
}

Val* ExpDiv::operationOptimisation(Val* gauche, Val* droite){
	double valG = gauche->getValeur();
	double valD = droite->getValeur();

	double res = operation(valG, valD);
	Val * valOpti = new Val(res);
	delete this;
	return valOpti;
}
