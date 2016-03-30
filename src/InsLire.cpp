#include <iostream>
using namespace std;

#include "InsLire.h"
#include "Val.h"

//----------------------------------------------------------------- PUBLIC
InsLire::InsLire ( const InsLire & unInsLire )
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <InsLire>" << endl;
#endif

	this->idSymbole = unInsLire.idSymbole;
	this->nomId = unInsLire.nomId;
	this->precedenteIns = unInsLire.precedenteIns;
	this->type = unInsLire.type;
}


InsLire::InsLire ( )
{
#ifdef MAP
	cout << "Appel au constructeur de <InsLire>" << endl;
#endif

	this->idSymbole = INS;
	this->type = LIRE;
}

InsLire::InsLire (bool first)
{
#ifdef MAP
	cout << "Appel au constructeur de <InsLire>" << endl;
#endif

	if(first)
		this->idSymbole = INSROOT;
	else
		this->idSymbole = INS;

		this->type = LIRE;
}

InsLire::InsLire(Ins * prec, Id* aId)
{
	this->idSymbole = INS;
	this->type = LIRE;
	this->nomId = aId;
	this->precedenteIns = prec;
}

InsLire::~InsLire ( )
{
#ifdef MAP
	cout << "Appel au destructeur de <InsLire>" << endl;
#endif
}

void InsLire::evaluationIns(map<string,Exp*> & variables)
{
	map<string,Exp*>::iterator var = variables.find(this->nomId->getNomId());
	double valeur;
	cout << "Entrez une valeur pour la variable " << getNomId() << endl;
	cin >> valeur;
	if (var!=variables.end())
	{
		Exp * newVal = new Val(valeur);
		delete var->second;
		var->second = newVal;
 	}
	else
	{
 		cerr << "La variable " << getNomId() << " n'a pas été trouvée" << endl;
 	}
}

list<string> InsLire::getListeId()
{
	return (list<string>)NULL;
}

void InsLire::afficher()
{
	cout << "lire " << nomId->getNomId() << ";" << endl;
}

string InsLire::getNomId()
{
	return nomId->getNomId();
}
