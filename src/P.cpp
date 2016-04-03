#include <iostream>
using namespace std;

#include "../header/P.h"

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
	this->idSymbole = EP;
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

std::list<Ins*> P::getListeIns()
{
	std::list<Ins*> liste;
	Ins* instructionCourante = ins;
	while (instructionCourante->getId() != INSROOT)
	{
		liste.push_front(instructionCourante);
		instructionCourante = instructionCourante->getPrecIns();
	}
	return liste;
}

void P::makeVars()
{
	// on parcourt toutes les paires de Cids pour populer this->Vars
	Cids * cids = new Cids();
	map<Id*, Val*> mapCid = cids->getMapCid();
	for (map<Id*, Val*>::const_iterator i = mapCid.begin(); i != mapCid.end(); ++i)
	{
	this->vars.insert(std::pair<string,Exp*>(i->first->getNomId(), i->second));
	}

	// on parcourt toutes les paires de Vids pour populer this->Vars
	Vids * vids = new Vids();
	map<Id*, Exp*> mapVid = vids->getMapVid();
	for (map<Id*, Exp*>::const_iterator i = mapVid.begin(); i != mapVid.end(); ++i)
	{
	this->vars.insert(std::pair<string,Exp*>(i->first->getNomId(), i->second));
	}
}

void P::evaluation()
{
	makeVars();

  std::list<Ins*> listeIns = getListeIns();
  std::list<Ins*>::iterator itListeIns;

	Ins* instructionCourante;

	// on parcourt la liste des instructions
	for (itListeIns = listeIns.begin(); itListeIns != listeIns.end(); ++itListeIns)
	{
		instructionCourante = *itListeIns;
		instructionCourante->evaluationIns(this->vars);
	}
}

void P::optimisation()
{
	std::list<Ins*>::iterator itListeIns;

  std::list<Ins*> listeIns = getListeIns();
	Ins* instructionCourante;

	map<string, Val*> mapStringVal;

	Cids * cids = new Cids();
	map<Id*, Val*> mapCid = cids->getMapCid();
	for (map<Id*, Val*>::const_iterator i = mapCid.begin(); i != mapCid.end(); ++i)
	{
		mapStringVal.insert(std::pair<string,Val*>(i->first->getNomId(), i->second));
	}


	// on parcourt la liste des instructions
	for (itListeIns = listeIns.begin(); itListeIns != listeIns.end(); ++itListeIns)
	{
		instructionCourante = *itListeIns;
		instructionCourante->optimisationIns(mapStringVal);
	}
} //----- Fin de Optimisation

void P::afficher()
{
	// Affichage des déclarations
	Cids cids;
	Vids vids;
	cids.afficher();
	vids.afficher();

	// Affichage des instructions
	list<Ins*> listeIns = getListeIns();
	list<Ins*>::iterator it;
	for(it = listeIns.begin(); it != listeIns.end(); ++it)
	{
		(*it)->afficher();
	}
}
