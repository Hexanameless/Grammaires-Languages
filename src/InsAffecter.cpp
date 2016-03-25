//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst��me

#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "InsAffecter.h"
#include "Val.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv��s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M��thodes publiques

	void InsAffecter::setExp(Exp * aExp)
	{
		this->expAffecter = aExp;
	}

	void InsAffecter::optimisationIns()
	{
		setExp(this->expAffecter->optimisation());
		/*ExpBin* tmpExpBin = this->expAffecter->optimisationExp();
		if( tmpExpBin != NULL ) setExp( tmpExpBin );
		delete tmpExpBin;*/
	}

	list<string> InsAffecter::getListeId()
	{
		return expAffecter->getListeId();
	}

	string InsAffecter::getNomId()
	{
		return nomId.getNomId();
	}

	void InsAffecter::evaluationIns(std::map<Id,Exp*> & variables)
	{
		std::map<Id,Exp*>::const_iterator var = variables.find(nomId);
		if (var!=variables.end()) {
			Exp * newVal = new Val(var->second->evaluation(variables));
	   		variables[nomId] = newVal;
	 	}
	}

//-------------------------------------------- Constructeurs - destructeur
	InsAffecter::InsAffecter ( const InsAffecter & unInsAffecter )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsAffecter>" << endl;
	#endif

		this->idSymbole = unInsAffecter.idSymbole;
		this->action = unInsAffecter.action;
		this->expAffecter = unInsAffecter.expAffecter;
		this->nomId = unInsAffecter.nomId;
	}


	InsAffecter::InsAffecter ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		this->idSymbole = INSAFFECTER;
		this->action = (int)aAffecter;
		this->expAffecter = NULL;
	}


	InsAffecter::InsAffecter (Id aId, Exp * aExp)
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		InsAffecter();
		this->nomId = aId;
		this->expAffecter = aExp;

	}

	InsAffecter::~InsAffecter ( )
	{
	#ifdef MAP
	    cout << "Appel au destructeur de <InsAffecter>" << endl;
	#endif
	}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M��thodes prot��g��es

//------------------------------------------------------- M��thodes priv��es
