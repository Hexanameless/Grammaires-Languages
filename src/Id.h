#if ! defined ( ID_H )
#define ID_H

//--------------------------------------------------- Interfaces utilis��s
#include <string>
#include <list>
#include "Exp.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//
//
//------------------------------------------------------------------------

 class Id : public Exp
{
//----------------------------------------------------------------- PUBLIC

public:

    std::list<std::string> getListeId();
    std::string getNomId();
    double evaluation(const std::map<Id*,Exp*> & variables);
    Exp* optimisation();

    bool operator<(const Id & second) const;

    Id ( const Id & Id );
    Id ( );
    Id (std::string);
    virtual ~Id ( );

    std::string getNom();

    void afficher();

//------------------------------------------------------------------ PRIVE

protected:
    std::string nomId;

};

#endif // ID_H
