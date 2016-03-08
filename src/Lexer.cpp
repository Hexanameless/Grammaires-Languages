/*************************************************************************
                           Lexer  -  description
                             -------------------
    début                : 7 mars 2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Réalisation de la classe <Lexer> (fichier Lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <string>
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Lexer.h"
#include "Automate.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

bool Lexer::is_number(const string & s)
// Algorithme :
//
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

string Lexer::to_string()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel a la methode to_string() de <Lexer>" << endl;
#endif
	for(int i=0; i<this->symboles.size(); i++)
	{
		cout << this->symboles[i] << endl;
	}
}

/*Symbole Lexer::getNext ()
// Algorithme :
//
{
	char charCourant;
	string symboleCourant = "";
	bool finSymbole = false;

	while(!finSymbole && (this->itProgrammeEnLecture != this->programmeEnLecture.end()) ) {
		charCourant = *(this->itProgrammeEnLecture++);
		cout << "charCourant = " << charCourant << endl;

		

		switch(charCourant)
		{
			case ',' :
				//Automate::transition(Symbole::Virg);
				cout << "Symbole::Virg" << endl;
				finSymbole = true;
				break;
			case ';' :
				//Automate::transition(Symbole::Pv);
				cout << "Symbole::Pv" << endl;
				finSymbole = true;
				break;
			case '+' :
				//Automate::transition(Symbole::Add);
				cout << "Symbole::Add" << endl;
				finSymbole = true;
				break;
			case '-' :
				//Automate::transition(Symbole::Sub);
				cout << "Symbole::Sub" << endl;
				finSymbole = true;
				break;
			case '*' :
				//Automate::transition(Symbole::Mul);
				cout << "Symbole::Mul" << endl;
				finSymbole = true;
				break;
			case '/' :
				//Automate::transition(Symbole::Div);
				cout << "Symbole::Div" << endl;
				finSymbole = true;
				break;
			case '(' :
				//Automate::transition(Symbole::Po);
				cout << "Symbole::Po" << endl;
				finSymbole = true;
				break;
			case ')' :
				//Automate::transition(Symbole::Pf);
				cout << "Symbole::Pf" << endl;
				finSymbole = true;
				break;
			case '=' :
				cout << "egal" << endl;
				finSymbole = true;
				break;
			case ' ' :
				cout << "espace" << endl;
				finSymbole = true;
				break;
		}

		cout << "symboleCourant = " << symboleCourant << endl;

		if(finSymbole)
		{
			if(is_number(symboleCourant))
			{
				//Automate::transition(Symbole::Val);
				cout << "Symbole::Val" << endl;
			} else if(symboleCourant.compare("var") == 0)
			{
				//Automate::transition(Symbole::Var);
				cout << "Symbole::Var" << endl;
			} else if(symboleCourant.compare("const") == 0)
			{
				//Automate::transition(Symbole::Const);
				cout << "Symbole::Const" << endl;
			} else if(symboleCourant.compare("ecrire") == 0)
			{
				//Automate::transition(Symbole::Ecrire);
				cout << "Symbole::Ecrire" << endl;
			} else if(symboleCourant.compare("lire") == 0)
			{
				//Automate::transition(Symbole::Lire);
				cout << "Symbole::Lire" << endl;
			} else if(symboleCourant.compare(":=") == 0)
			{
				//Automate::transition(Symbole::Aff);
				cout << "Symbole::Aff" << endl;
			} else if(symboleCourant.compare("=") == 0)
			{
				//Automate::transition(Symbole::Eg);
				cout << "Symbole::Eg" << endl;
			} else
			{
				//Automate::transition(Symbole::Id);
				cout << "Symbole::Id" << endl;
			}
		

			symboleCourant = "";

			//TODO : à enlever
			finSymbole = false;
		} else {
			symboleCourant += charCourant;
		}

		
		
	}

} //----- Fin de Méthode getNext()*/


//------------------------------------------------- Surcharge d'opérateurs
Lexer & Lexer::operator = ( const Lexer & unLexer )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Lexer::Lexer ( const Lexer & unLexer )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Lexer>" << endl;
#endif
} //----- Fin de Lexer (constructeur de copie)


Lexer::Lexer ( const string & programme )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Lexer>" << endl;
#endif

    this->programmeEnLecture = programme;

    int i;
    string symboleCourant = "";
    char curChar, nextChar;

    for(i=0; i< programme.length() ; i++)
    {
    	curChar = programme[i];

    	switch(curChar)
    	{
    		case ' ':
    			if (symboleCourant.length()>0) 
					{
						this->symboles.push_back(symboleCourant);
	    				symboleCourant = "";
	    			}
    			break;
    		case '=' :
    			if (symboleCourant.compare(":")==0) {
    				symboleCourant += curChar;
    				this->symboles.push_back(symboleCourant);
    				symboleCourant = "";
    			} else {
    				if (symboleCourant.length()>0) 
					{
						this->symboles.push_back(symboleCourant);
	    				symboleCourant = "";
	    			}
	    			string s(1, curChar);
	    			this->symboles.push_back(s);
    			}
    			break;
    		case ';' :
    		case ',' :
    		case '+' :
    		case '-' :
    		case '*' :
    		case '/' :
    		{
    			if (symboleCourant.length()>0) 
				{
					this->symboles.push_back(symboleCourant);
    				symboleCourant = "";
    			}
    			string s(1, curChar);
    			this->symboles.push_back(s);
    			break;
    		}
    		default :
    			symboleCourant += curChar;
    			break;
    	}

    }
    this->symboles.push_back("$");

    //this->itProgrammeEnLecture = programme.begin();

} //----- Fin de Lexer


Lexer::~Lexer ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Lexer>" << endl;
#endif
} //----- Fin de ~Lexer


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
