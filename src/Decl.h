/*************************************************************************
                           Decl  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <Decl> (fichier Decl.h) ------
#if ! defined ( DECL_H )
#define DECL_H

#include <map>
#include "Vids.h"
#include "Cids.h"
#include "Id.h"
#include "Exp.h"

class Decl : public Symbole
{

//----------------------------------------------------------------- PUBLIC
public:

  Decl ( const Decl & unDecl );
  Decl ( );
  Decl (Vids aVids, Cids aCids);
  virtual ~Decl();

  std::list<Id> getVids();
  std::list<Id> getCids();

//------------------------------------------------------------------ PRIVE
private:

	Vids vids;
	Cids cids;
  std::map<Id, Exp> vars; // map qui contient la concaténation de Cids et Vids

};

#endif // DECL_H
