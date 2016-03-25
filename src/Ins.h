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
#include "Id.h"
#include "Exp.h"

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
		virtual void evaluationIns(const std::map<Id,Exp*> & variables);
		virtual std::string getNomId();
		virtual std::list<std::string> getListeId();

//------------------------------------------------------------------ PRIVE
protected:

    int action;

};

#endif // INS_H
