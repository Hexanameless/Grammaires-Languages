#if ! defined ( ID_H )
#define ID_H

//--------------------------------------------------- Interfaces utilis��s
#include <string>
#include <list>
#include "Exp.h"
#include "Val.h"
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
    double evaluation(const std::map<std::string,Exp*> & variables);
    Exp* optimisation(const std::map<std::string,Val*> & variables);

    bool operator<(const Id & second) const;
    bool operator==(const Id & second) const;

    Id ( const Id & Id );
    Id ( );
    Id (std::string);
    virtual ~Id ( );

    void afficher();

//------------------------------------------------------------------ PRIVE

protected:
    std::string nomId;

};

#endif // ID_H
