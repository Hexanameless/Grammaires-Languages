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
#ifdef MAP
    cout << "Appel a la methode is_number() de <Lexer>" << endl;
#endif
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
} //----- Fin de Méthode is_number()



Symbole Lexer::getNext ()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel a la methode getNext() de <Lexer>" << endl;
#endif
	
    if ( this->indexSymboleCourant != this->symboles.size() )
    {
		string symboleCourant = this->symboles[this->indexSymboleCourant++];
	    //string symboleCourant;
		cout << symboleCourant << endl;

		if(is_number(symboleCourant))
		{
			//return Automate::transition(Symbole::Val);
			cout << "Symbole::Val" << endl;
		} else if(symboleCourant.compare("var") == 0)
		{
			//return Automate::transition(Symbole::Var);
			cout << "Symbole::Var" << endl;
		} else if(symboleCourant.compare("const") == 0)
		{
			//return Automate::transition(Symbole::Const);
			cout << "Symbole::Const" << endl;
		} else if(symboleCourant.compare("ecrire") == 0)
		{
			//return Automate::transition(Symbole::Ecrire);
			cout << "Symbole::Ecrire" << endl;
		} else if(symboleCourant.compare("lire") == 0)
		{
			//return Automate::transition(Symbole::Lire);
			cout << "Symbole::Lire" << endl;
		} else if(symboleCourant.compare(":=") == 0)
		{
			//return Automate::transition(Symbole::Aff);
			cout << "Symbole::Aff" << endl;
		} else if(symboleCourant.compare("=") == 0)
		{
			//return Automate::transition(Symbole::Eg);
			cout << "Symbole::Eg" << endl;
		} else if(symboleCourant.compare(",") == 0)
		{
			//return Automate::transition(Symbole::Virg);
			cout << "Symbole::Virg" << endl;
		} else if(symboleCourant.compare(";") == 0)
		{
			//return Automate::transition(Symbole::Pv);
			cout << "Symbole::Pv" << endl;
		} else if(symboleCourant.compare("+") == 0)
		{
			//return Automate::transition(Symbole::Add);
			cout << "Symbole::Add" << endl;
		} else if(symboleCourant.compare("-") == 0)
		{
			//return Automate::transition(Symbole::Sub);
			cout << "Symbole::Sub" << endl;
		} else if(symboleCourant.compare("*") == 0)
		{
			//return Automate::transition(Symbole::Mul);
			cout << "Symbole::Mul" << endl;
		} else if(symboleCourant.compare("/") == 0)
		{
			//return Automate::transition(Symbole::Div);
			cout << "Symbole::Div" << endl;
		} else if(symboleCourant.compare("(") == 0)
		{
			//return Automate::transition(Symbole::Po);
			cout << "Symbole::Po" << endl;
		} else if(symboleCourant.compare(")") == 0)
		{
			//return Automate::transition(Symbole::Pf);
			cout << "Symbole::Pf" << endl;
		} else if(symboleCourant.compare("$") == 0)
		{
			//return Automate::transition(Symbole::Dollar);
			cout << "Symbole::Dollar" << endl;
		} else
		{
			//return Automate::transition(Symbole::Id);
			cout << "Symbole::Id" << endl;
		}
	}

	return NULL;

} //----- Fin de Méthode getNext()

vector<string> Lexer::parseProgramme(string programme)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel a la methode parseProgramme() de <Lexer>" << endl;
#endif

    vector<string> symboles;

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
						symboles.push_back(symboleCourant);
	    				symboleCourant = "";
	    			}
    			break;
    		case '=' :
    			if (symboleCourant.compare(":")==0) {
    				symboleCourant += curChar;
    				symboles.push_back(symboleCourant);
    				symboleCourant = "";
    			} else {
    				if (symboleCourant.length()>0) 
					{
						symboles.push_back(symboleCourant);
	    				symboleCourant = "";
	    			}
	    			string s(1, curChar);
	    			symboles.push_back(s);
    			}
    			break;
    		case ';' :
    		case ',' :
    		case '+' :
    		case '-' :
    		case '*' :
    		case '/' :
    		case '(' :
    		case ')' :
    		{
    			if (symboleCourant.length()>0) 
				{
					symboles.push_back(symboleCourant);
    				symboleCourant = "";
    			}
    			string s(1, curChar);
    			symboles.push_back(s);
    			break;
    		}
    		default :
    			symboleCourant += curChar;
    			break;
    	}

    }
    symboles.push_back("$");

    return symboles;

} //----- Fin de Méthode parseProgramme()

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
} //----- Fin de Méthode to_string()


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
    this->symboles = parseProgramme(programme);
    this->indexSymboleCourant = 0;
    

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
