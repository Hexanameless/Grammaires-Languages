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

	void InsAffecter::optimisationIns(std::map<string,Val*> & variables)
	{
		setExp(this->expAffecter->optimisation(variables));
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
		return nomId->getNomId();
	}

	void InsAffecter::evaluationIns(std::map<string,Exp*> & variables)
	{
		std::map<string,Exp*>::const_iterator var = variables.find(this->nomId->getNomId());
		if (var!=variables.end()) {
			Exp * newVal = new Val(var->second->evaluation(variables));
			delete var->second;
	   		variables[nomId->getNomId()] = newVal;
	 	} else { // TODO que faire si on ne trouve pas l'id dans la map ????
	 		cerr << "La variable " << this->nomId->getNomId() << " n'a pas été trouvée" << endl;
	 	}
	}

	void InsAffecter::afficher()
	{
		cout << nomId->getNomId() << " := ";
		expAffecter->afficher();
		cout << ";" << endl;
	}

//-------------------------------------------- Constructeurs - destructeur
	InsAffecter::InsAffecter ( const InsAffecter & unInsAffecter )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <InsAffecter>" << endl;
	#endif

		this->idSymbole = unInsAffecter.idSymbole;
		this->expAffecter = unInsAffecter.expAffecter;
		this->nomId = unInsAffecter.nomId;
		this->precedenteIns = unInsAffecter.precedenteIns;
	}


	InsAffecter::InsAffecter ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		this->idSymbole = INS;
		this->expAffecter = NULL;
		this->type = AFFECTER;
	}

	InsAffecter::InsAffecter (bool first)
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		if(first)
			this->idSymbole = INSROOT;
		else
			this->idSymbole=INS;
		this->expAffecter = NULL;
		this->type = AFFECTER;
	}


	InsAffecter::InsAffecter (Ins* prec, Id * aId, Exp * aExp)
	{
	#ifdef MAP
		cout << "Appel au constructeur de <InsAffecter>" << endl;
	#endif

		this->idSymbole = INS;
		this->type = AFFECTER;
		this->nomId = aId;
		this->expAffecter = aExp;
		this->precedenteIns = prec;
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
