#if ! defined ( P_H )
#define P_H

using namespace std;
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
    
//------------------------------------------------------------------ PRIVE
protected:
    list<Ins> listeIns;
    Decl decl;

};

#endif // P_H
