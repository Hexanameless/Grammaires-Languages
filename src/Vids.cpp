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
// type Vids::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Vids & Vids::operator = ( const Vids & unVids )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Vids::Vids ( const Vids & unVids )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Vids>" << endl;
#endif
} //----- Fin de Vids (constructeur de copie)


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
} //----- Fin de ~Vids


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
