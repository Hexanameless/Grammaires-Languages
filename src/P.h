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
    virtual ~P ( );

    Cids* getCids();
    Vids* getVids();
    std::list<Ins> getListeIns();

    void evaluation();
    void optimisation();

//------------------------------------------------------------------ PRIVE
protected:
    list<Ins> listeIns;
    Decl decl;

};

#endif // P_H
