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

class Decl : public Symbole
{

//----------------------------------------------------------------- PUBLIC
public:

  Decl ( const Decl & unDecl );
  Decl ( );

  std::list<Id> getVids();
  std::list<Id> getCids();

//------------------------------------------------------------------ PRIVE
private:

	Vids vids;
	Cids cids;

};

#endif // DECL_H
