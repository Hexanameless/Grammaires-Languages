//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst��me
#include <iostream>
using namespace std;
#include <list>

//------------------------------------------------------ Include personnel
#include "InsEcrire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv��s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M��thodes publiques


//------------------------------------------------- Surcharge d'op��rateurs

	void InsEcrire::setExp(Exp * aExp)
	{
		this->expEcrire = aExp;
	}

	void InsEcrire::optimisationIns()
	{
		setExp(this->expEcrire->optimisation());
	}

	list<string> InsEcrire::getListeId()
	{
		return expEcrire->getListeId();
	}

	void InsEcrire::evaluationIns(const std::map<Id,Exp*> & variables)
	{
		cout << (expEcrire->evaluation(variables)) <<endl;
	}

//-------------------------------------------- Constructeurs - destructeur
	InsEcrire::InsEcrire ( const InsEcrire & unInsEcrire )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsEcrire>" << endl;
	#endif

		this->idSymbole = unInsEcrire.idSymbole;
		this->precedenteIns = unInsEcrire.precedenteIns;
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


	InsEcrire::InsEcrire(Ins * prec, ExpBin * aExp) 
	{
		this->idSymbole = INSECRIRE;
		this->expEcrire = aExp;
		this->precedenteIns = prec;
	}

	InsEcrire::~InsEcrire ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <InsEcrire>" << endl;
	#endif
	}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
