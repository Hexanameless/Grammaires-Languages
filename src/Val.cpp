#include <iostream>
using namespace std;
#include <string>

#include "Val.h"

//----------------------------------------------------------------- PUBLIC

Val::Val ( const Val & unVal )
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Val>" << endl;
#endif

	this->idSymbole = unVal.idSymbole;
	this->valeur = unVal.valeur;
}

Val::Val ( )
{
#ifdef MAP
	cout << "Appel au constructeur de <Val>" << endl;
#endif

	this->idSymbole = VAL;
}

Val::Val(int aVal)
{
	this->idSymbole = VAL;
	valeur = (double) aVal;
}

Val::Val(double aVal)
{
	this->idSymbole = VAL;
	valeur = aVal;
}

Val::~Val ()
{
#ifdef MAP
	cout << "Appel au destructeur de <Val>" << endl;
#endif
}

double Val::getValeur() {
	return this->valeur;
}

double Val::evaluation(const std::map<string,Exp*> & variables) {
	return valeur;
}

Exp* Val::optimisation(const std::map<string,Val*> & variables) {
	return this;
}

list<string> Val::getListeId()
{
	return list<string>();
}

void Val::afficher()
{
	cout << valeur;
}
