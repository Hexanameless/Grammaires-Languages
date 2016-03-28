#include <iostream>
#include <stdlib.h>
#include "ExpDiv.h"
using namespace std;

ExpDiv::ExpDiv(Exp * g, Exp * d) : ExpBin(g,d) { idSymbole = T; }

ExpDiv::~ExpDiv() { }

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
		if ( dynamic_cast <Val*>(expDroite)->getValeur()!=0 )
		{
			delete this;
			return new Val(dynamic_cast <Val*>(expDroite)->getValeur() / dynamic_cast <Val*>(expDroite)->getValeur());
		}
	} else if (expGauche->getId()==ID && expDroite->getId()==VAL)
	{
		if (dynamic_cast <Val*>(expDroite)->getValeur()==1)
		{
			delete this;
			return expGauche;
		}
	}
	return this;
}

void ExpDiv::afficher()
{
	gauche->afficher();
	cout << " / ";
	droite->afficher();
}
