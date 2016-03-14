//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst¨¨me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "P.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv¨¦s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M¨¦thodes publiques


//------------------------------------------------- Surcharge d'op¨¦rateurs

//-------------------------------------------- Constructeurs - destructeur
	P::P ( const P & unP )
	// Algorithme :
	//
	{
	#ifdef MAP
		cout << "Appel au constructeur de copie de <P>" << endl;
	#endif
} //----- Fin de P (constructeur de copie)


	P::P ( )
	// Algorithme :
	//
	{
	#ifdef MAP
		cout << "Appel au constructeur de <P>" << endl;
	#endif
		this->idSymbole = eP;
} //----- Fin de P


P::~P ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <P>" << endl;
#endif
} //----- Fin de ~P


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M¨¦thodes prot¨¦g¨¦es

//------------------------------------------------------- M¨¦thodes priv¨¦es
