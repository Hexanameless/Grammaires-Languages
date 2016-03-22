/*************************************************************************
                           EtatIdStatique  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <EtatIdStatique> (fichier EtatIdStatique.cpp) --
#include <iostream>
using namespace std;

#include "EtatIdStatique.h"

//----------------------------------------------------------------- PUBLIC
EtatIdStatique::EtatIdStatique (bool constante)
{
#ifdef MAP
  cout << "Appel au constructeur de <EtatIdStatique>" << endl;
#endif

  if (constante)
  {
    this->constante = true;
    this->variable = false;
  }
  else
  {
    this->constante =false;
    this->variable = true;
  }
  declare = true;
  affecte = false;
  utilise = false;

} //----- Fin de EtatIdStatique

EtatIdStatique::~EtatIdStatique ( )
{
#ifdef MAP
  cout << "Appel au destructeur de <EtatIdStatique>" << endl;
#endif
} //----- Fin de ~EtatIdStatique

EtatIdStatique::affecter()
{
  affecte = true;
}

EtatIdStatique::utiliser()
{
  utilise = true;
}

EtatIdStatique::estAffecte()
{
  return affecte;
}

EtatIdStatique::estUtilise()
{
  return utilise;
}
