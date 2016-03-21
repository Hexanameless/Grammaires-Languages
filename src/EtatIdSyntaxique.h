/*************************************************************************
                           EtatIdSyntaxique  -  description
                             -------------------
    début                : 21 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <EtatIdSyntaxique> (fichier EtatIdSyntaxique.h) ------
#if ! defined ( ETATIDSYNTAXIQUE_H )
#define ETATIDSYNTAXIQUE_H

class AnalyseSyntaxique
{
//----------------------------------------------------------------- PUBLIC
public:
    EtatIdSyntaxique();
    virtual ~EtatIdSyntaxique();

//------------------------------------------------------------------ PRIVE
private:
    bool constante;
    bool variable;
    bool declare;
    bool affecte;
    bool utilise;

};

#endif // ETATIDSYNTAXIQUE_H
