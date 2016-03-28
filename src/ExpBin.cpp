#include "ExpBin.h"
#include <iostream>
using namespace std;

  ExpBin::ExpBin(Exp * g, Exp * d) {
     gauche = g;
     droite = d;
  }

  ExpBin::~ExpBin() {
     delete gauche;
     delete droite;
  }

  list<string> ExpBin::getListeId()
  {
    list<string> idsGauche = gauche->getListeId();
    list<string> idsDroite = droite->getListeId();
        
    idsGauche.insert(idsGauche.end(), idsDroite.begin(), idsDroite.end());
  	
    return idsGauche;
  }
