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

  this->constante = constante;
  this->variable = !constante;
  // Une constante est toujours affecté une premiere fois
  affecte = constante;
  utilise = false;

} //----- Fin de EtatIdStatique

EtatIdStatique::~EtatIdStatique ( )
{
#ifdef MAP
  cout << "Appel au destructeur de <EtatIdStatique>" << endl;
#endif
} //----- Fin de ~EtatIdStatique

void EtatIdStatique::affecter()
{
  affecte = true;
}

void EtatIdStatique::utiliser()
{
  utilise = true;
}

bool EtatIdStatique::estAffecte()
{
  return affecte;
}

bool EtatIdStatique::estUtilise()
{
  return utilise;
}

bool EtatIdStatique::estConstante()
{
  return constante;
}
