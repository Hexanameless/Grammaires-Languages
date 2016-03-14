//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst¨¨me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Ins.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv¨¦s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M¨¦thodes publiques


//------------------------------------------------- Surcharge d'op¨¦rateurs

//-------------------------------------------- Constructeurs - destructeur
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

		this->idSymbole = (int)Ins;
		this->action = (int)UnAssigned;

}


Ins::~Ins ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Ins>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
