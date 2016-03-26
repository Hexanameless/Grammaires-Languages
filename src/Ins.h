/*************************************************************************
                           Ins  -  description
                             -------------------
    d√©but                : 07/03/2016
    copyright            : (C) 2016 par Y. Tang
*************************************************************************/

//---------- Interface de la classe <Ins> (fichier Ins.h) ------
#if ! defined ( INS_H )
#define INS_H

#include "Symbole.h"
#include "Id.h"
#include "Exp.h"


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

private:
//------------------------------------------------------- M®¶thodes priv®¶es

protected:
//----------------------------------------------------- Attributs prot®¶g®¶s

Ins * precedenteIns;

private:
//------------------------------------------------------- Attributs priv®¶s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv®¶es

//----------------------------------------------------------- Types priv®¶s
>>>>>>> 8526f43f7ba061e3d804d8b5ec6ddc85a9763b9c

};

#endif // INS_H
