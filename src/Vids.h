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
//----------------------------------------------------- Méthodes publiques
	

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Vids ( const Vids & unVids );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

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
//----------------------------------------------------- Méthodes protégées
	void addVid(Id, Val);
private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés
	MapVid mapVid;

private:
//------------------------------------------------------- Attributs privés
	
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <Vids>

#endif // VIDS_H