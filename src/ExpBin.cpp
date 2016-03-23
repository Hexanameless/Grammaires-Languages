
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

   /*
   idee :
   Dans Decl, concatener Cids et Vids dans une unique map std::map<Id, Exp> vars
   à la fin de la lecure du programme.
   Delete cids, vids.
   Faire methode getVars().

   tant que valg n'est pas une Val : valg = gauche->Evaluation(std::map<Id, Exp>);
   tant que vald n'est pas une Val : vald = droite->Evaluation(std::map<Id, Exp>);

   return operation(valg,vald);

   Cela implique de retourner Exp Id::Evaluation(const Vars & variables)
   */
   valg = gauche->Evaluation(variables);
   vald = droite->Evaluation(variables);
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
