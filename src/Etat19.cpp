	 /*************************************************************************
                           Etat19  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par E.Bai
*************************************************************************/

//---------- Réalisation de la classe <Etat19> (fichier Etat19.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "../header/Etat19.h"
#include "../header/Val.h"
#include "../header/Id.h"
#include "../header/Cids.h"

//------------------------------------------------------------- CONSTantes

//---------------------------------------------------- VARiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Etat19::transition(Automate* const automate, Symbole* symbole)
{
	for (int i = 0; i < 5; i++)
		automate->popEtat();

    Val* val = (Val*)automate->popSymbole(); //On pop la valeur
    delete automate->popSymbole(); // On dépile le symbole =
    Id* id = (Id*)automate->popSymbole(); // on récupère l'id
    delete automate->popSymbole();//On dépile la virgule
    Cids* cids= (Cids*)automate->popSymbole(); // on récupère le Cids existant
    cids->affecter(id, val);
	automate->pushSymbole(cids);
    automate->transitionReduction();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- CONSTructeurs - destructeur
Etat19::Etat19 ( const Etat19 & unEtat19 )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Etat19>" << endl;
#endif
} //----- Fin de Etat19 (constructeur de copie)


Etat19::Etat19 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Etat19>" << endl;
#endif
} //----- Fin de Etat19


Etat19::~Etat19 ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Etat19>" << endl;
#endif
} //----- Fin de ~Etat19


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
