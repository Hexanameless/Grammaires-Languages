/*************************************************************************
                           EtatIdStatique  -  description
                             -------------------
    début                : 21 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Interface de la classe <EtatIdStatique> (fichier EtatIdStatique.h) ------
#if ! defined ( ETATIDSTATIQUE_H )
#define ETATIDSTATIQUE_H

class EtatIdStatique
{
//----------------------------------------------------------------- PUBLIC
public:
    EtatIdStatique(bool constante);
    virtual ~EtatIdStatique();

    void affecter();
    void utiliser();

    bool estAffecte();
    bool estUtilise();
    bool estConstante();

//------------------------------------------------------------------ PRIVE
private:
    bool constante;
    bool variable;
    bool affecte;
    bool utilise;

};

#endif // ETATIDSTATIQUE_H
