/*************************************************************************
                           Decl  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <Decl> (fichier Decl.h) ------
#if ! defined ( DECL_H )
#define DECL_H

#include "Vids.h"
#include "Cids.h"
#include "Decl.h"

class Decl : public Symbole
{

//----------------------------------------------------------------- PUBLIC
public:

  Decl ( const Decl & unDecl );
  Decl ( );
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

};

#endif // DECL_H
