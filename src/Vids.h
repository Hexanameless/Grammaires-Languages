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
#include <list>
#include "Symbole.h"
#include "Id.h"
#include "Val.h"

typedef std::map<Id*, Exp*> MapVid;

class Vids : public Symbole
{
//----------------------------------------------------------------- PUBLIC
public:
//----------------------------------------------------- Méthodes publiques
	void addVid(Id*);
    void affecter(Id*, Exp*);

    MapVid getMapVid();

    Vids ( );
    virtual ~Vids ( );

    std::list<Id> getId();

//------------------------------------------------------------------ PRIVE
protected:
//----------------------------------------------------- Méthodes publiques

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
	
private:

    static MapVid mapVid;

};

#endif // VIDS_H
