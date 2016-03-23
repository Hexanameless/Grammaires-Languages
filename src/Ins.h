/*************************************************************************
                           Ins  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par Y. Tang
*************************************************************************/

//---------- Interface de la classe <Ins> (fichier Ins.h) ------
#if ! defined ( INS_H )
#define INS_H

#include "Symbole.h"

enum ActionIns{
	UnAssigned,
	aEcrire,
	aAffecter,
	aLire
};

 class Ins : public Symbole
{
//----------------------------------------------------------------- PUBLIC
public:

    Ins & operator = ( const Ins & unIns);

    Ins ( const Ins & Ins );
    Ins ( );
    virtual ~Ins ( );

		virtual void optimisationIns();

//------------------------------------------------------------------ PRIVE
protected:

    int action;

};

#endif // INS_H
