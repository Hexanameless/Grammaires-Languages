//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst��me
#include <iostream>
#include <stdlib.h>
using namespace std;
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
		list<string> listeId (1, this->nomId);
		return listeId;
	}

	string Id::getNomId(){
		return this->nomId;
	}

//------------------------------------------------- Surcharge d'op��rateurs

	bool Id::operator<(const Id & second) const
	{
		return (nomId < second.nomId );
	}

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
		this->idSymbole = ID;
		this->nomId = aId;
	}

	Id::~Id ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <Id>" << endl;
	#endif
	}

	Exp* Id::optimisation()
	{
		return this;
	}

	double Id::evaluation(const std::map<Id*,Exp*> & variables) {
	   std::map<Id*,Exp*>::const_iterator var = variables.find(this);
	   if (var!=variables.end()) {
	   		return (*var).second->evaluation(variables);
	   } else {
	      cerr << "Un problème sur la variable " << this->getNom() << " est survenu (n'existe pas en mémoire, aucune valeur affectée...)" << endl;
	      exit(EXIT_FAILURE);
	   }
	}

	string Id::getNom()
	{
		return nomId;
	}

	void Id::afficher()
	{
		cout << nomId;
	}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
