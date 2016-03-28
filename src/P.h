    #if ! defined ( P_H )
#define P_H

#include <list>
#include <map>

#include "Symbole.h"
#include "Ins.h"
#include "Decl.h"
#include "Id.h"
#include "Exp.h"

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
    std::list<Ins*> getListeIns();
    void makeVars();

    void evaluation();
    void optimisation();
    void afficher();

//------------------------------------------------------------------ PRIVE
protected:
    Ins* ins;
    Decl* decl;

    std::map<Id*, Exp*> vars; // map qui contient la concaténation de Cids et Vids

    void affichageVariable(std::string var);
};

#endif // P_H
