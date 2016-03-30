/*************************************************************************
                           ExpUnaire  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par M.Christ
*************************************************************************/

//---------- Réalisation de la classe <ExpUnaire> (fichier ExpUnaire.cpp) --

#include <iostream>
using namespace std;

#include "ExpUnaire.h"
#include "ExpBin.h"

//----------------------------------------------------------------- PUBLIC

ExpUnaire::ExpUnaire ( const ExpUnaire & unExpUnaire )

{
#ifdef MAP
  cout << "Appel au constructeur de copie de <ExpUnaire>" << endl;
#endif
  this->expression = unExpUnaire.expression;
  this->idSymbole = unExpUnaire.idSymbole;
} //----- Fin de ExpUnaire (constructeur de copie)

ExpUnaire::ExpUnaire (int type, Exp* expression)
{
#ifdef MAP
  cout << "Appel au constructeur de <ExpUnaire>" << endl;
#endif
  this->expression = expression;
  this->idSymbole = type;
} //----- Fin de ExpUnaire

ExpUnaire::ExpUnaire ( )
{
#ifdef MAP
  cout << "Appel au constructeur de <ExpUnaire>" << endl;
#endif
} //----- Fin de ExpUnaire

ExpUnaire::~ExpUnaire ( )
{
#ifdef MAP
  cout << "Appel au destructeur de <ExpUnaire>" << endl;
#endif
} //----- Fin de ~ExpUnaire

Exp* ExpUnaire::optimisation(const std::map<string,Val*> & variables)
{
    return expression->optimisation(variables);
}

double ExpUnaire::evaluation(const std::map<string,Exp*> & variables)
{
    return expression->evaluation(variables);
}

std::list<std::string> ExpUnaire::getListeId()
{
    return expression->getListeId();
}

void ExpUnaire::afficher()
{
    expression->afficher();
}
