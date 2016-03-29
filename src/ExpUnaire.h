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

  Exp* optimisation(const std::map<std::string,Val*> & variables);
  double evaluation(const std::map<std::string,Exp*> & variables);
  std::list<std::string> getListeId();

  void afficher();

//------------------------------------------------------------------ PRIVE
private:
	Exp* expression;

};

#endif // ExpUnaire_H
