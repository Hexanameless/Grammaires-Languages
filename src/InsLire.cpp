//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst��me
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "InsLire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv��s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M��thodes publiques


//------------------------------------------------- Surcharge d'op��rateurs

//-------------------------------------------- Constructeurs - destructeur
	InsLire::InsLire ( const InsLire & unInsLire )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsLire>" << endl;
	#endif

		this->idSymbole = unInsLire.idSymbole;
		this->action = unInsLire.action;
		this->nomId = unInsLire.nomId;
	}


	InsLire::InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsLire>" << endl;
	#endif

		this->idSymbole = INSLIRE;
		this->action = (int)aLire;
	}

/**
	InsLire::InsLire(Id aId)
	{
		InsLire();
		this->nomId = aId;
	}
	**/

	InsLire::~InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <InsLire>" << endl;
	#endif
	}

	string InsLire::getNomId()
	{
		return nomId.getNomId;
	}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
