
using namespace std;
#include <iostream>

#include "Ins.h"


//----------------------------------------------------------------- PUBLIC
Ins::Ins ( const Ins & unIns )
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Ins>" << endl;
#endif

	this->idSymbole = unIns.idSymbole;
	this->action = unIns.action;
}


Ins::Ins ( )
{
#ifdef MAP
	cout << "Appel au constructeur de <Ins>" << endl;
#endif

	this->idSymbole = INS;
	this->action = (int)UnAssigned;
}


Ins::~Ins ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Ins>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE
