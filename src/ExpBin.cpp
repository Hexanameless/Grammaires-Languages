#include "ExpBin.h"

ExpBin::ExpBin(Exp * g, Exp * d) {
   gauche = g;
   droite = d;
}

ExpBin::~ExpBin() {
   delete gauche;
   delete droite;
}