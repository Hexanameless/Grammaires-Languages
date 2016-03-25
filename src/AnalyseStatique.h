/*************************************************************************
                           AnalyseStatique  -  description
                             -------------------
    début                : 21 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <AnalyseStatique> (fichier AnalyseStatique.h) ------
#if ! defined ( ANALYSESTATIQUE_H )
#define ANALYSESTATIQUE_H

#include <map>

#include "Id.h"
#include "EtatIdStatique.h"
#include "P.h"
#include "Ins.h"

class AnalyseStatique
{
//----------------------------------------------------------------- PUBLIC
public:
    AnalyseStatique(const P &programme);
    virtual ~AnalyseStatique();

    void verifierTableStatique();

//------------------------------------------------------------------ PRIVE
private:
    bool erreurStatique;
    std::map<Id, *EtatIdStatique> tableStatique;

    void initTableStatique(const P &programme);
    void traiterInstructions(const P &programme);

    void gererInstructionEcrire(Ins * ins);
    void gererInstructionLire(Ins * ins);
    void gererInstructionAffecter(Ins * ins);

};

#endif // ANALYSESTATIQUE_H
