
#include <iostream>
using namespace std;
#include <cmath>

#include "ExpBin.h"

ExpBin::ExpBin(Exp * g, Exp * d) {
   gauche = g;
   droite = d;
}

ExpBin::~ExpBin() {
   delete gauche;
   delete droite;
}


double ExpBin::evaluation(const std::map<Id,Exp*> & variables) {
   double valg,vald;
   valg = gauche->evaluation(variables);
   vald = droite->evaluation(variables);
   return operation(valg,vald);
}

Exp* ExpBin::optimisation() {

   // parcourt de manière récursive les parties gauche et droite d'une expression pour les optimiser
   // le parcours récursif s'arrete lorsqu'on tombe sur une Val (qui se retorune elle même)
	Exp* exprGauche = gauche->optimisation();
	Exp* exprDroite = droite->optimisation();

	// ici exprGauche et exprDroite sont des Val
	return operationOptimisation((Val*) exprGauche, (Val*) exprDroite);
}

list<string> ExpBin::getListeId()
{
  list<string> idsGauche = gauche->getListeId();
  list<string> idsDroite = droite->getListeId();

  idsGauche.insert(idsGauche.begin(), idsDroite.begin(), idsDroite.end());
	return idsGauche;
}
