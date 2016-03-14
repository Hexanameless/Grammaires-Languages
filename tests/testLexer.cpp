#include <iostream>
#include <fstream>
#include <string>
#include <getopt.h>
#include "../src/Lexer.h"

using namespace std;
int main(int argc, char* argv[])
{
	ifstream fichier(argv[optind], ios::in);		
	string ligne, prog;
	if(fichier)
	{
		string ligne = "";
		string prog = "";
		while(getline(fichier, ligne))
		{
			prog.append(ligne);
		}

		fichier.close();

		Lexer * testLexer = new Lexer(prog);
		testLexer->to_string();
		string next = "";
		int err = 0;
		while(err!=1){
			cout << "getNext ?" <<endl;
			cin >> next;
			if (next.compare("n")==0)
			{
				testLexer->getNext();
			}
		}
		
	}
	else
	{
		cerr << "Pb a l'ouverture du fichier" << endl;
	}

	return 0;
}
