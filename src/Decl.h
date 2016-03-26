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
#include "Symbole.h"
#include "Decl.h"

class Decl : public Symbole
{

//----------------------------------------------------------------- PUBLIC
public:

  Decl ( const Decl & unDecl );
  Decl ( );

  virtual ~Decl();

  void makeVars();
  std::map<Id*, Exp*> getVars();

  Decl (Decl* adecl, Vids* avids);
  Decl (Decl* adecl, Cids* acids);

  Vids* getVids();
  Cids* getCids();
  Decl* getDecl();


//------------------------------------------------------------------ PRIVE
private:

	Vids* vids;
	Cids* cids;
  Decl* decl;
  std::map<Id*, Exp*> vars; // map qui contient la concaténation de Cids et Vids

};

#endif // DECL_H
