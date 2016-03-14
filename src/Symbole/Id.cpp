/*************************************************************************
                           Id  -  description
                             -------------------
    début                : 14 mars 2016
    copyright            : (C) 2016 par E. Bai
*************************************************************************/

//---------- Réalisation de la classe <Id> (fichier Id.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Id.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
// type Id::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

Id::affecter (int val);
// Algorithme :
//
{
	this->valeur = val;
} //----- Fin de affecter

int Id::getValeur ();
// Algorithme :
//
{
	return valeur;
} //----- Fin de operator =

//------------------------------------------------- Surcharge d'opérateurs
Id & Id::operator = ( const Id & unId )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Id::Id ( string nomVariable )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Id>" << endl;
#endif
    this->nom=nomVariable;
} //----- Fin de Id

Id::Id ( const Id & unId )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Id>" << endl;
#endif
} //----- Fin de Id (constructeur de copie)


Id::Id ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Id>" << endl;
#endif
} //----- Fin de Id


Id::~Id ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Id>" << endl;
#endif
} //----- Fin de ~Id


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
