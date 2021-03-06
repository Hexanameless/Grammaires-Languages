#include <iostream>
using namespace std;

#include "ExpSub.h"

ExpSub::ExpSub(Exp * g, Exp * d) : ExpBin(g,d) { idSymbole = EXP; }

ExpSub::~ExpSub() { }

double ExpSub::evaluation(const std::map<string,Exp*> & variables)
{
	return (gauche->evaluation(variables) - droite->evaluation(variables));
}

Exp* ExpSub::optimisation(const std::map<string,Val*> & variables) {
	Exp* expGauche = gauche->optimisation(variables);
	Exp* expDroite = droite->optimisation(variables);

	if(expGauche->getId()==VAL && expDroite->getId()==VAL)
	{
			delete this;
			return new Val(dynamic_cast <Val*>(expGauche)->getValeur() - dynamic_cast <Val*>(expDroite)->getValeur());
	} else if (expGauche->getId()==ID && expDroite->getId()==VAL)
	{
		if (dynamic_cast <Val*>(expDroite)->getValeur()==0)
		{
			delete this;
			return expGauche;
		}
	} else if (expGauche->getId()==VAL && expDroite->getId()==ID)
	{
		if (dynamic_cast <Val*>(expGauche)->getValeur()==0)
		{
			delete this;
			return expDroite;
		}
	}
	return this;
}

void ExpSub::afficher()
{
	cout << "(";
	gauche->afficher();
	cout << " - ";
	droite->afficher();
	cout << ")";
}
