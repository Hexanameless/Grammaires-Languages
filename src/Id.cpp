//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst¨¨me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Id.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv¨¦s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M¨¦thodes publiques


//------------------------------------------------- Surcharge d'op¨¦rateurs

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

		this->idSymbole = (int)Id;
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


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
