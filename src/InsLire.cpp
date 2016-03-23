//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst¨¨me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "InsLire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv¨¦s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M¨¦thodes publiques


//------------------------------------------------- Surcharge d'op¨¦rateurs

//-------------------------------------------- Constructeurs - destructeur
	InsLire::InsLire ( const InsLire & unInsLire )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsLire>" << endl;
	#endif

		this->idSymbole = unInsLire.idSymbole;
		this->nomId = unInsLire.nomId;
		this->precedenteIns = unInsLire.precedenteIns
	}


	InsLire::InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsLire>" << endl;
	#endif

		this->idSymbole = INS;
	}

	InsLire::InsLire(Ins * prec, Id* aId)
	{
		InsLire();
		this->nomId = aId;
		this->precedenteIns = prec
	}

	InsLire::~InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <InsLire>" << endl;
	#endif
	}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
