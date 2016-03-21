/*************************************************************************
                           Vids  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <Vids> (fichier Vids.h) ------
#if ! defined ( VIDS_H )
#define VIDS_H

#include <map>
#include "Symbole.h"
#include "Id.h"
#include "Val.h"

typedef map<Id, Val> MapVid;

using namespace std;
class Vids : public Symbole
{
//----------------------------------------------------------------- PUBLIC
public:

    Vids ( );
    virtual ~Vids ( );

//------------------------------------------------------------------ PRIVE
protected:

	void addVid(Id);
	void affecter(Id, Val);

private:
	static MapVid mapVid;

};

#endif // VIDS_H
