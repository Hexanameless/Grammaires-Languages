/*************************************************************************
                           ExpUnaire  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par M.Christ
*************************************************************************/

//---------- Réalisation de la classe <ExpUnaire> (fichier ExpUnaire.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ExpUnaire.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
ExpUnaire::ExpUnaire ( const ExpUnaire & unExpUnaire )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ExpUnaire>" << endl;
#endif
    this->expression = unExpUnaire.expression;
    this->idSymbole = unExpUnaire.idSymbole;
} //----- Fin de ExpUnaire (constructeur de copie)

ExpUnaire::ExpUnaire (int type, Exp* expression)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpUnaire>" << endl;
#endif
    this->expression = expression;
    this->idSymbole = type;
} //----- Fin de ExpUnaire


ExpUnaire::ExpUnaire ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ExpUnaire>" << endl;
#endif
} //----- Fin de ExpUnaire


ExpUnaire::~ExpUnaire ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ExpUnaire>" << endl;
#endif
} //----- Fin de ~ExpUnaire


Exp* ExpUnaire::optimisation()
{
    return expression->optimisation();
}

double ExpUnaire::evaluation(const std::map<Id*,Exp*> & variables)
{
    return expression->evaluation(variables);
}

std::list<std::string> ExpUnaire::getListeId()
{
    return expression->getListeId();
}

void ExpUnaire::afficher()
{
  if (expression->getId() == F)
  {
    cout << "(" << expression->afficher() << ")";
  } else
  {
    cout << expression->afficher();
  }
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
