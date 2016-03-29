#include <iostream>
#include <stdlib.h>
#include "ExpDiv.h"
using namespace std;

ExpDiv::ExpDiv(Exp * g, Exp * d) : ExpBin(g,d) { idSymbole = T; }

ExpDiv::~ExpDiv() { }

double ExpDiv::evaluation(const std::map<string,Exp*> & variables)
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

Exp* ExpDiv::



optimisation(const std::map<string,Val*> & variables) {
	Exp* expGauche = gauche->optimisation(variables);
	Exp* expDroite = droite->optimisation(variables);

	if(expGauche->getId()==VAL && expDroite->getId()==VAL)
	{
		if ( dynamic_cast <Val*>(expDroite)->getValeur()!=0 )
		{
			delete this;
			return new Val(dynamic_cast <Val*>(expGauche)->getValeur() / dynamic_cast <Val*>(expDroite)->getValeur());
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
	cout << "(";
	gauche->afficher();
	cout << " / ";
	droite->afficher();
	cout << ")";
}
