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

//-------------------------------------------- Constructeurs - destructeur
	InsAffecter::InsAffecter ( const InsAffecter & unInsAffecter )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsAffecter>" << endl;
	#endif

		this->idSymbole = unInsAffecter.idSymbole;
		this->action = unInsAffecter.action;
		this->expAffecter = unInsAffecter.expAffecter;
		this->nomId = unInsAffecter.nomId;
	}


	InsAffecter::InsAffecter ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		this->idSymbole = (int)INSAFFECTER;
		this->action = (int)aAffecter;
	}


	InsAffecter::InsAffecter (Id aId, Exp aExp)
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		InsAffecter();
		this->nomId = aId;
		this->expAffecter = aExp;

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
