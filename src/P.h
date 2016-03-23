#if ! defined ( P_H )
#define P_H

#include <list>

#include "Symbole.h"
#include "Ins.h"
#include "Decl.h"

class P : public Symbole
{
//----------------------------------------------------------------- PUBLIC
public:

    P ( const P & p );
    P ( );
    virtual ~P ( );

    std::list<Id> getCids();
    std::list<Id> getVids();
    std::list<Ins> getListeIns();

    void optimisation();

//------------------------------------------------------------------ PRIVE
protected:
    list<Ins * > listeIns;
    Decl decl;

};

#endif // P_H
