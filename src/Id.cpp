//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst��me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Id.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv��s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M��thodes publiques
list<string> Id::getListeId()
{
	return list<string>({this->nomId});
}

string Id::getNomId()
{
	return nomId;
}


//------------------------------------------------- Surcharge d'op��rateurs

//-------------------------------------------- Constructeurs - destructeur
	Id::Id ( const Id & unId )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <Id>" << endl;
	#endif

		this->idSymbole = unId.idSymbole;
		this->nomId = unId.nomId;
	}


	Id::Id ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <Id>" << endl;
	#endif

		this->idSymbole = ID;
	}

	Id::Id(string aId)
	{
		Id();
		this->nomId = aId;
	}

	Id::~Id ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <Id>" << endl;
	#endif
	}

	//Exp Id::Evaluation(const Vars & variables)
	double Id::evaluation(const Vars & variables) {
	   Vars::const_iterator var = variables.find(nomId);
	   if (var!=variables.end()) {
	      return (*var).second;
	   } else {
	      return .0;
	   }
	}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
