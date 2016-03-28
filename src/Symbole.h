/*************************************************************************
                           Symbole  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Interface de la classe <Symbole> (fichier Symbole.h) ------
#if ! defined ( SYMBOLE_H )
#define SYMBOLE_H

    enum e_symbole {
      VAR,
      CONST,
      ECRIRE,
      LIRE,
      AFFECTER,
      VIRG,
      PV,
      ADD,
      SUB,
      MUL,
      DIV,
      OPA,
      OPM,
      AFF,
      EG,
      PO,
      PF,
      EP,
      DECL,
      DECLROOT,
      VIDS,
      CIDS,
      INS,
      INSROOT,
      EXP,
      F,
      T,
      VAL,
      ID,
      DOLLAR,
      DEFAULT,
      ERROR
    };

class Symbole
{

//----------------------------------------------------------------- PUBLIC
public:

    Symbole ( const Symbole & unSymbole );

    Symbole();
    Symbole (int id);
    virtual ~Symbole ( );

    int getId ();

//------------------------------------------------------------------ PRIVE
protected:

    int idSymbole;

};

#endif // SYMBOLE_H
