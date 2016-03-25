//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst��me
#include <iostream>
using namespace std;
#include <string>

//------------------------------------------------------ Include personnel
#include "Val.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv��s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M��thodes publiques

	double Val::getValeur() {
		return this->valeur;
	}

//------------------------------------------------- Surcharge d'op��rateurs

//-------------------------------------------- Constructeurs - destructeur
	Val::Val ( const Val & unVal )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <Val>" << endl;
	#endif

		this->idSymbole = unVal.idSymbole;
		this->valeur = unVal.valeur;

	}


	Val::Val ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <Val>" << endl;
	#endif

		this->idSymbole = VAL;

	}

	Val::Val(int aVal)
	{
		Val();
		valeur = (double) aVal;
	}

	Val::Val(double aVal)
	{
		Val();
		valeur = aVal;
	}

	Val::~Val ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <Val>" << endl;
	#endif
	}

	double Val::evaluation(const std::map<Id,Exp*> & variables) {
		return valeur;
	}

	Val* Val::optimisation() {
		return this;
	}

	list<string> Val::getListeId()
	{
		return list<string>();
	}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
