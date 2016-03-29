//---------------------------------------------------------------- INCLUDE

#include <iostream>
using namespace std;
//------------------------------------------------------ Include personnel
#include "InsLire.h"
#include "Val.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv��s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M��thodes publiques

	void InsLire::evaluationIns(std::map<string,Exp*> & variables)
	{
		std::map<string,Exp*>::const_iterator var = variables.find(this->nomId->getNomId());
		double valeur;
		cout << "Entrez une valeur pour la variable " << getNomId() << endl;
		cin >> valeur;
		if (var!=variables.end()) {
			Exp * newVal = new Val(valeur);
			delete var->second;
	   		variables[nomId->getNomId()] = newVal;
	 	} else { // TODO que faire si on ne trouve pas l'id dans la map ????
	 		cerr << "La variable " << getNomId() << " n'a pas été trouvée" << endl;
	 	}
	}

std::list<std::string> InsLire::getListeId()
{
	return (std::list<std::string>)NULL;
}

void InsLire::afficher()
{
	cout << "lire " << nomId->getNomId() << ";" << endl;
}

//------------------------------------------------- Surcharge d'op��rateurs

//-------------------------------------------- Constructeurs - destructeur
	InsLire::InsLire ( const InsLire & unInsLire )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsLire>" << endl;
	#endif

		this->idSymbole = unInsLire.idSymbole;
		this->nomId = unInsLire.nomId;
		this->precedenteIns = unInsLire.precedenteIns;
		this->type = unInsLire.type;
	}


	InsLire::InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsLire>" << endl;
	#endif

		this->idSymbole = INS;
		this->type = LIRE;
	}

	InsLire::InsLire (bool first)
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsLire>" << endl;
	#endif
		if(first)
			this->idSymbole = INSROOT;
		else
			this->idSymbole = INS;
		this->type = LIRE;
	}

	InsLire::InsLire(Ins * prec, Id* aId)
	{
		this->idSymbole = INS;
		this->type = LIRE;
		this->nomId = aId;
		this->precedenteIns = prec;
	}

	InsLire::~InsLire ( )
	{
	#ifdef MAP
		cout << "Appel au destructeur de <InsLire>" << endl;
	#endif
	}

	string InsLire::getNomId()
	{
		return nomId->getNomId();
	}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
