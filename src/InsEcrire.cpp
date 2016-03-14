//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst¨¨me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "InsEcrire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv¨¦s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M¨¦thodes publiques


//------------------------------------------------- Surcharge d'op¨¦rateurs

//-------------------------------------------- Constructeurs - destructeur
	InsEcrire::InsEcrire ( const InsEcrire & unInsEcrire )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsEcrire>" << endl;
	#endif

		this->idSymbole = unInsEcrire.idSymbole;
		this->action = unInsEcrire.action;
	}


	InsEcrire::InsEcrire ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsEcrire>" << endl;
	#endif

		this->idSymbole = (int)InsEcrire;
		this->action = (int)aEcrire;
	}

/**
	InsEcrire::InsEcrire(Id aId)
	{
		InsEcrire();
		this->nomId = aId;
	}
	**/

	InsEcrire::~InsEcrire ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <InsEcrire>" << endl;
	#endif
	}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
