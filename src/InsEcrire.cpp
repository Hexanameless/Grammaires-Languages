#include <iostream>
using namespace std;
#include <list>

#include "../header/InsEcrire.h"

//----------------------------------------------------------------- PUBLIC
InsEcrire::InsEcrire ( const InsEcrire & unInsEcrire )
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <InsEcrire>" << endl;
#endif

	this->idSymbole = unInsEcrire.idSymbole;
	this->precedenteIns = unInsEcrire.precedenteIns;
	this->type = unInsEcrire.type;
}


InsEcrire::InsEcrire()
{
#ifdef MAP
	cout << "Appel au constructeur de <InsEcrire>" << endl;
#endif

	this->idSymbole = INS;
	this->expEcrire = NULL;
	this->type = ECRIRE;
}

InsEcrire::InsEcrire(bool first)
{
#ifdef MAP
	cout << "Appel au constructeur de <InsEcrire>" << endl;
#endif

	if(first)
		this->idSymbole = INSROOT;
	else
		this->idSymbole = INS;

		this->expEcrire = NULL;
		this->type = ECRIRE;
}


InsEcrire::InsEcrire(Ins * prec, Exp * aExp)
{
	this->idSymbole = INS;
	this->expEcrire = aExp;
	this->precedenteIns = prec;
	this->type = ECRIRE;
}

InsEcrire::~InsEcrire ( )
{
#ifdef MAP
	cout << "Appel au destructeur de <InsEcrire>" << endl;
#endif
}

void InsEcrire::setExp(Exp * aExp)
{
	this->expEcrire = aExp;
}

void InsEcrire::optimisationIns(std::map<string,Val*> & variables)
{
	setExp(this->expEcrire->optimisation(variables));
}

list<string> InsEcrire::getListeId()
{
	return expEcrire->getListeId();
}

void InsEcrire::evaluationIns(std::map<string,Exp*> & variables)
{
	cout << (expEcrire->evaluation(variables)) <<endl;
}

void InsEcrire::afficher()
{
	cout << "ecrire ";
	expEcrire->afficher();
	cout << ";" << endl;
}
