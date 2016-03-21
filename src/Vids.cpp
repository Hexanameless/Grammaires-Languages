/*************************************************************************
                           Vids  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par G. Berthier
*************************************************************************/

//---------- Réalisation de la classe <Vids> (fichier Vids.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Vids.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques


//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur

Vids::Vids ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Vids>" << endl;
#endif
} //----- Fin de Vids


Vids::~Vids ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Vids>" << endl;
#endif
	Vids::mapVid.clear();
} //----- Fin de ~Vids


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
void addVid(Id aId) {
	Vids::mapVid.insert(pair<Id, Val>(aId, (Val)(NULL)));
}

void affecter(Id aId, Val aVal) {
	Vids::mapVid[aId] = aVal;
}
//------------------------------------------------------- Méthodes privées
