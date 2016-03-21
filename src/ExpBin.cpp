
#include "ExpBin.h"
#include <cmath>

ExpBin::ExpBin(Exp * g, Exp * d) {
   gauche = g;
   droite = d;
}

ExpBin::~ExpBin() {
   delete gauche;
   delete droite;
}


double ExpBin::Evaluation(const Vars & variables) {
   double valg,vald;
   valg = gauche->Evaluation(variables);
   vald = droite->Evaluation(variables);
   return operation(valg,vald);
}

Exp* ExpBin::Optimisation(Cids & cids) {
	Exp* exprGauche = gauche->Optimisation(Cids & cids);
	Exp* exprDroite = droite->Optimisation(Cids & cids);

	// ici exprGauche et exprDroite sont soit des Val soit des Null

	if(exprDroite==NULL || exprGauche==NULL) return this;

	Val* valOpti = OperationOptimisation(exprGauche, exprDroite);





}

