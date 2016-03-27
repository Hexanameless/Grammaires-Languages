/*************************************************************************
                           ExpUnaire  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par M.Christ
*************************************************************************/

//---------- Interface de la classe <ExpUnaire> (fichier ExpUnaire.h) ------
#if ! defined ( EXPUNAIRE_H )
#define EXPUNAIRE_H

#include "Exp.h"

class ExpUnaire : public Exp
{
//----------------------------------------------------------------- PUBLIC
public:
  ExpUnaire ();
  ExpUnaire (int type, Exp* expression);
  ExpUnaire (const ExpUnaire & unExpUnaire);
  virtual ~ExpUnaire ( );

  Exp* optimisation();
  double evaluation(const std::map<Id*,Exp*> & variables);
  std::list<std::string> getListeId();

//------------------------------------------------------------------ PRIVE
private:
	Exp* expression;

};

#endif // ExpUnaire_H
