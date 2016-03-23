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

	void InsEcrire::setExp(Exp * aExp)
	{
		this->expEcrire = aExp;
	}

	void InsEcrire::optimisationIns()
	{
		setExp(this->expEcrire->optimisation());
		/*ExpBin* tmpExpBin = this->expEcrire->optimisationExp();
		if( tmpExpBin != NULL ) setExp( tmpExpBin );
		delete tmpExpBin;*/
	}

//-------------------------------------------- Constructeurs - destructeur
	InsEcrire::InsEcrire ( const InsEcrire & unInsEcrire )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsEcrire>" << endl;
	#endif

		this->idSymbole = unInsEcrire.idSymbole;
		this->action = unInsEcrire.action;
	}


	InsEcrire::InsEcrire()
	{
#ifdef MAP
		cout << "Appel au constructeur de <InsEcrire>" << endl;
#endif

		this->idSymbole = INSECRIRE;
		this->action = (int)aEcrire;
		this->expEcrire = NULL;
	}

	InsEcrire::InsEcrire(Exp * aExp) 
	{
		this->idSymbole = INSECRIRE;
		this->action = (int)aEcrire;
		this->expEcrire = aExp;
	}

	InsEcrire::~InsEcrire ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <InsEcrire>" << endl;
	#endif
	}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
