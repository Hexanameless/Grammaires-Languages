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

	double Id::Evaluation(const Vars & variables) {
	   Vars::const_iterator var = variables.find(nomId);
	   if (var!=variables.end()) {
	      return (*var).second;
	   } else {
	      return .0;
	   }
	}

	Exp* Id::Optimisation(const Cids & cids) {
	   Cids::const_iterator id = cids.find(nomId);
	   if (id!=cids.end()) {
	      return *(*id).second; // TODO verifier si il faut rajouter une étoile
	   } 
	   return NULL; // pas d'optimisation à faire
	}



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
