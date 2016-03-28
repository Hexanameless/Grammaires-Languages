#include <iostream>
#include <stdlib.h>
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

	Exp* ExpDiv::optimisation() {
		Exp* expGauche = gauche->optimisation();
		Exp* expDroite = droite->optimisation();

		if(expGauche->getId()==VAL && expDroite->getId()==VAL)
		{
			if (expDroite->getValeur()!=0)
			{
				delete this;
				return new Val(expGauche->getValeur()/expDroite->getValeur());
			}
		} else if (expGauche->getId()==ID && expDroite->getId()==VAL)
		{
			if (expDroite->getValeur()==1)
			{
				delete this;
				return expGauche;
			}
		}
		return this;
	}
