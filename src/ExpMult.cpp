#include <iostream>
using namespace std;

#include "ExpMult.h"

ExpMult::ExpMult(Exp * g, Exp* d) : ExpBin(g,d) { idSymbole = T; }

ExpMult::~ExpMult() { }

double ExpMult::evaluation(const std::map<string,Exp*> & variables)
{
	return (gauche->evaluation(variables) * droite->evaluation(variables));
}

Exp* ExpMult::



optimisation(const std::map<string,Val*> & variables) {
	Exp* expGauche = gauche->optimisation(variables);
	Exp* expDroite = droite->optimisation(variables);

	if(expGauche->getId()==VAL && expDroite->getId()==VAL)
	{
			delete this;
			return new Val(dynamic_cast <Val*>(expGauche)->getValeur() * dynamic_cast <Val*>(expDroite)->getValeur());
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

void ExpMult::afficher()
{
	gauche->afficher();
	cout << " * ";
	droite->afficher();
}
