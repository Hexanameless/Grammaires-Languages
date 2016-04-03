#include <iostream>
using namespace std;

#include "../header/Ins.h"

//----------------------------------------------------------------- PUBLIC
Ins::Ins ( const Ins & unIns )
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Ins>" << endl;
#endif

	this->idSymbole = unIns.idSymbole;
}

Ins::Ins ( )
{
#ifdef MAP
	cout << "Appel au constructeur de <Ins>" << endl;
#endif

	this->idSymbole = INS;
	this->precedenteIns = NULL;
}

Ins::~Ins ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Ins>" << endl;
#endif
}

Ins* Ins::getPrecIns()
{
	return precedenteIns;
}

int Ins::getType()
{
	return type;
}
