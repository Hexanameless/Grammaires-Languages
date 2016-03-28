#include <iostream>
#include "ExpDiv.h"
using namespace std;

	ExpDiv::ExpDiv(Exp * g, Exp * d) : ExpBin(g,d) { } 
	ExpDiv::~ExpDiv() { }

/*	double ExpDiv::operation(double g, double d) {
		if(d==0) std::cerr << "Division par zero impossible" << endl;
	   return g/d;
	}*/

	double ExpDiv::evaluation(const std::map<Id*,Exp*> & variables)
	{
		double d = droite->evaluation(variables);

		if(d==0) 
		{
			// en cas de division par 0 on renvoie un message d'erreur et arrête l'éxecution
			std::cerr << "Division par zero impossible" << endl;
			exit(EXIT_FAILURE);
		}

		return (gauche->evaluation(variables) / d);
	}

	Val* ExpDiv::operationOptimisation(Val* gauche, Val* droite){
		double valG = gauche->getValeur();
		double valD = droite->getValeur();

		double res = operation(valG, valD);
		Val * valOpti = new Val(res);
		delete this;
		return valOpti;
	}
