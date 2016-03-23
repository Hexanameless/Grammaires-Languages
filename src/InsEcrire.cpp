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

void InsEcrire::setExp(ExpBin * aExpBin)
{
	this->expEcrire = aExpBin;
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
		this->expEcrire = nullptr;
	}

	InsEcrire::InsEcrire(Ins * prec, ExpBin * aExpBin) 
	{
		this->idSymbole = INSECRIRE;
		this->expEcrire = aExpBin;
		this->precedenteIns = prec;
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
