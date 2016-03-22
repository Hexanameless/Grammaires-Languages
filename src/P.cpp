using namespace std;
#include <iostream>

#include "P.h"

//----------------------------------------------------------------- PUBLIC
P::P ( const P & unP )
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <P>" << endl;
	#endif
} //----- Fin de P (constructeur de copie)

P::P ( )
	{
	#ifdef MAP
		cout << "Appel au constructeur de <P>" << endl;
	#endif
		this->idSymbole = EP;
} //----- Fin de P

P::~P ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <P>" << endl;
#endif
} //----- Fin de ~P

Vids P::getVids()
{
	return decl.getVids();
}

Cids P::getCids()
{
	return decl.getCids();
}

//------------------------------------------------------------------ PRIVE
