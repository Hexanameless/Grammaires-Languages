
#include <iostream>
using namespace std;

#include "Ins.h"


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
	}

	Ins::~Ins ( )
	{
	#ifdef MAP
	    cout << "Appel au destructeur de <Ins>" << endl;
	#endif
	}

//------------------------------------------------------------------ PRIVE
