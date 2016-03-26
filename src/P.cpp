using namespace std;
#include <iostream>

#include "P.h"

//----------------------------------------------------------------- PUBLIC
P::P ( const P & unP )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <P>" << endl;
	#endif
} //----- Fin de P (constructeur de copie)

P::P ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <P>" << endl;
	#endif
		this->idSymbole = EP;
} //----- Fin de P

P::P(Decl* decl, Ins* ins)
{
	#ifdef MAP
		cout << "Appel au constructeur de <P>" << endl;
	#endif
		P();
		this->decl = decl;
		this->ins = ins;
}

P::~P ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <P>" << endl;
#endif
} //----- Fin de ~P

Vids* P::getVids()
{
	return decl->getVids();
}

Cids* P::getCids()
{
	return decl->getCids();
}

list<Id> P::getIdVar()
{
	return decl->getVids()->getId();
}

list<Id> P::getIdConst()
{
	return decl->getCids()->getId();
}


/*
std::list<Ins> P::getListeIns()
{
	return P::listeIns;
}

void P::evaluation()
{
	this->decl.makeVars();
	map<Id*, Exp*> variables = this->decl.getVars();

    std::list<Ins>::iterator itListeIns;

	Ins instructionCourante;

	// on parcourt la liste des instructions
	for (itListeIns = listeIns.begin(); itListeIns != listeIns.end(); ++itListeIns)
	{
		instructionCourante = *itListeIns;
		instructionCourante.evaluationIns(variables);
	}
}

void P::optimisation()
{
	std::list<Ins>::iterator itListeIns;

	Ins instructionCourante;

	// on parcourt la liste des instructions
	for (itListeIns = listeIns.begin(); itListeIns != listeIns.end(); ++itListeIns)
	{
		instructionCourante = *itListeIns;
		instructionCourante.optimisationIns();
	}
} //----- Fin de Optimisation

*/

//------------------------------------------------------------------ PRIVE
