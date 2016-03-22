/*************************************************************************
                           Vids  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <Vids> (fichier Vids.h) ------
#if ! defined ( VIDS_H )
#define VIDS_H

//--------------------------------------------------- Interfaces utilisées
#include <map>
#include "Symbole.h"
#include "Id.h"
#include "Val.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
typedef map<Id, Val> MapVid;
//------------------------------------------------------------------------
// Rôle de la classe <Vids>
//
//
//------------------------------------------------------------------------

using namespace std;
class Vids : public Symbole
{
//----------------------------------------------------------------- PUBLIC

public:
	static MapVid mapVid;
//----------------------------------------------------- Méthodes publiques
	void addVid(Id);
    void affecter(Id, Val);

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Vids ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Vids ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes publiques

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
	

private:
//------------------------------------------------------- Attributs privés
	
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Vids>

#endif // VIDS_H
