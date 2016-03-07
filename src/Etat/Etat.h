#if ! defined ( ETAT_H )
#define ETAT_H

#include "../Automate.h"
#include "../Symbole.h"


class Etat
{

public:
    Etat();

    virtual Etat transition(Automate automate, Symbole symbole);
};

#endif 
