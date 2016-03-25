//---------------------------------------------------------------- INCLUDE

#include <iostream>
using namespace std;
//------------------------------------------------------ Include personnel
#include "InsLire.h"
#include "Val.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privï¿½ï¿½s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Mï¿½ï¿½thodes publiques

	void InsLire::evaluationIns(std::map<Id,Exp*> & variables)
	{
		std::map<Id,Exp*>::const_iterator var = variables.find(this->nomId);
		double valeur;
		cout << "Entrez une valeur pour la variable " << getNomId() << endl;
		cin >> valeur;
		if (var!=variables.end()) {
			Exp * newVal = new Val(valeur);
			delete var->second;
	   		variables[nomId] = newVal;
	 	} else { // TODO que faire si on ne trouve pas l'id dans la map ????
	 		cerr << "La variable " << getNomId() << " n'a pas été trouvée" << endl;
	 	}
	}


//------------------------------------------------- Surcharge d'opï¿½ï¿½rateurs

//-------------------------------------------- Constructeurs - destructeur
	InsLire::InsLire ( const InsLire & unInsLire )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsLire>" << endl;
	#endif

		this->idSymbole = unInsLire.idSymbole;
		this->action = unInsLire.action;
		this->nomId = unInsLire.nomId;
	}


	InsLire::InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsLire>" << endl;
	#endif

		this->idSymbole = INSLIRE;
		this->action = (int)aLire;
	}

/**
	InsLire::InsLire(Id aId)
	{
		InsLire();
		this->nomId = aId;
	}
	**/

	InsLire::~InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <InsLire>" << endl;
	#endif
	}

	string InsLire::getNomId()
	{
		return nomId.getNomId();
	}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Mï¿½ï¿½thodes protï¿½ï¿½gï¿½ï¿½es

//------------------------------------------------------- Mï¿½ï¿½thodes privï¿½ï¿½es
