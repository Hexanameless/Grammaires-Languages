/*************************************************************************
                           AnalyseSyntaxique  -  description
                             -------------------
    début                : 21 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <AnalyseSyntaxique> (fichier AnalyseSyntaxique.h) ------
#if ! defined ( ANALYSESYNTAXIQUE_H )
#define ANALYSESYNTAXIQUE_H

class AnalyseSyntaxique
{
//----------------------------------------------------------------- PUBLIC
public:
    AnalyseSyntaxique(const P &programme);
    virtual ~AnalyseSyntaxique();

    void initTableSyntaxique(const P &programme);
    void traiterInstructions(const P &programme);
    void verifierTableSyntaxique();

//------------------------------------------------------------------ PRIVE
private:
    bool erreurSyntaxique;
    std::map<*Id, *EtatIdSyntaxique> tableSyntaxique;

};

#endif // ANALYSESYNTAXIQUE_H
