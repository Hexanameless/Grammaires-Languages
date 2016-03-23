//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst¨¨me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "InsAffecter.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv¨¦s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M¨¦thodes publiques


//------------------------------------------------- Surcharge d'op¨¦rateurs

void InsAffecter::setExp(ExpBin * aExpBin)
{
	this->expAffecter = aExpBin;
}

//-------------------------------------------- Constructeurs - destructeur
	InsAffecter::InsAffecter ( const InsAffecter & unInsAffecter )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsAffecter>" << endl;
	#endif

		this->idSymbole = unInsAffecter.idSymbole;
		this->expAffecter = unInsAffecter.expAffecter;
		this->nomId = unInsAffecter.nomId;
		this->precedenteIns = unInsAffecter.precedenteIns;
	}


	InsAffecter::InsAffecter ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		this->idSymbole = INSAFFECTER;
		this->expAffecter = nullptr;
	}
	

	InsAffecter::InsAffecter (Ins* prec, Id * aId, ExpBin * aExp)
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		InsAffecter();
		this->nomId = aId;
		this->expAffecter = aExp;
		this->precedenteIns = prec;
	}




InsAffecter::~InsAffecter ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <InsAffecter>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
