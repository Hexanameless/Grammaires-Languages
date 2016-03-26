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
#include <string>

#include "Id.h"
#include "EtatIdStatique.h"
#include "P.h"
#include "Ins.h"

class AnalyseStatique
{
//----------------------------------------------------------------- PUBLIC
public:
    AnalyseStatique(P * programme);
    virtual ~AnalyseStatique();

    int verifierTableStatique();

//------------------------------------------------------------------ PRIVE
private:
    bool erreurStatique;
    std::map<std::string, EtatIdStatique*> tableStatique;

    void initTableStatique(P& programme);
    void traiterInstructions(P& programme);

    void gererInstructionEcrire(Ins& ins);
    void gererInstructionLire(Ins& ins);
    void gererInstructionAffecter(Ins& ins);

    bool idDeclare(std::string& id);

};

#endif // ANALYSESTATIQUE_H
