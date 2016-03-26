    #if ! defined ( P_H )
#define P_H

#include <list>
#include <map>

#include "Symbole.h"
#include "Ins.h"
#include "Decl.h"

class P : public Symbole
{
//----------------------------------------------------------------- PUBLIC
public:

    P ( const P & p );
    P ( );
    P (Decl* decl, Ins* ins);
    virtual ~P ( );

    Cids* getCids();
    Vids* getVids();
    std::list<Id> getIdVar();
    std::list<Id> getIdConst();
    std::list<Ins> getListeIns();

    void evaluation();
    void optimisation();

//------------------------------------------------------------------ PRIVE
protected:
    Ins* ins;
    Decl* decl;

};

#endif // P_H
