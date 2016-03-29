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

	bool Id::operator==(const Id & second) const
	{
		return (nomId == second.nomId);
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

	Exp* Id::



optimisation(const std::map<string,Val*> & variables)
	{
		std::map<string,Val*>::const_iterator var = variables.find(getNomId());
	   if (var!=variables.end()) {
	   		return (*var).second->optimisation(variables);
	   } else {
	      return this;
	   }
	}

	double Id::evaluation(const std::map<string,Exp*> & variables) {
	   std::map<string,Exp*>::const_iterator var = variables.find(getNomId());
	   if (var!=variables.end()) {
	   		return (*var).second->evaluation(variables);
	   } else {
	      cerr << "Un problème sur la variable " << this->getNomId() << " est survenu (n'existe pas en mémoire, aucune valeur affectée...)" << endl;
	      exit(EXIT_FAILURE);
	   }
	}

	void Id::afficher()
	{
		cout << nomId;
	}

//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
