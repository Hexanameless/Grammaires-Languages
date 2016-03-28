#include "ExpMult.h"

	ExpMult::ExpMult(Exp * g, Exp* d) : ExpBin(g,d) { idSymbole = T; } 

	ExpMult::~ExpMult() { }

	double ExpMult::evaluation(const std::map<Id*,Exp*> & variables)
	{
		return (gauche->evaluation(variables) * droite->evaluation(variables));
	}

	Exp* ExpMult::optimisation() {
		Exp* expGauche = gauche->optimisation();
		Exp* expDroite = droite->optimisation();

		if(expGauche->getId()==VAL && expDroite->getId()==VAL)
		{
				delete this;
				return new Val(dynamic_cast <Val*>(expDroite)->getValeur() * dynamic_cast <Val*>(expDroite)->getValeur());
		} else if (expGauche->getId()==ID && expDroite->getId()==VAL)
		{
			if (dynamic_cast <Val*>(expDroite)->getValeur()==1)
			{
				delete this;
				return expGauche;
			}
		} else if (expGauche->getId()==VAL && expDroite->getId()==ID)
		{
			if (dynamic_cast <Val*>(expGauche)->getValeur()==1)
			{
				delete this;
				return expDroite;
			}
		}
		return this;
	}
