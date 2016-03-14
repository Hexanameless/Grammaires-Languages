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
			return Symbole(VAL);

		} else if(symboleCourant.compare("var") == 0)
		{
			return Symbole(VAR);

		} else if(symboleCourant.compare("const") == 0)
		{
			return Symbole(CONST);

		} else if(symboleCourant.compare("ecrire") == 0)
		{
			return Symbole(ECRIRE);

		} else if(symboleCourant.compare("lire") == 0)
		{
			return Symbole(LIRE);

		} else if(symboleCourant.compare(":=") == 0)
		{
			return Symbole(AFF);

		} else if(symboleCourant.compare("=") == 0)
		{
			return Symbole(EG);

		} else if(symboleCourant.compare(",") == 0)
		{
			return Symbole(VIRG);

		} else if(symboleCourant.compare(";") == 0)
		{
			return Symbole(PV);

		} else if(symboleCourant.compare("+") == 0)
		{
			return Symbole(ADD);

		} else if(symboleCourant.compare("-") == 0)
		{
			return Symbole(SUB);

		} else if(symboleCourant.compare("*") == 0)
		{
			return Symbole(MUL);

		} else if(symboleCourant.compare("/") == 0)
		{
			return Symbole(DIV);

		} else if(symboleCourant.compare("(") == 0)
		{
			return Symbole(PO);

		} else if(symboleCourant.compare(")") == 0)
		{
			return Symbole(PF);

		} else if(symboleCourant.compare("$") == 0)
		{
			return Symbole(DOLLAR);

		} else
		{
			return Symbole(ID);

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
    char curChar;

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
