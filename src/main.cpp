#include <iostream>
#include <fstream>
#include <getopt.h>
#include <string>
#include "main.h"

using namespace std;
int main(int argc, char* argv[])
{
	int option = 0;
	bool affichage = false;
	bool analyseStatique = false;
	bool execution = false;
	bool transformation = false;

	while((option = getopt(argc, argv, "aeop")) != -1)
	{
		switch(option)
		{
			case 'a' :
				analyseStatique = true;
				break;
			case 'o' :
				transformation = true;
				break;
			case 'e':
				execution = true;
				break;
			case 'p' :
				affichage = true;
		}
	}

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

		if(affichage)
			cout << prog << endl;

		fichier.close();
	}
	else
	{
		cerr << "Pb a l'ouverture du fichier" << endl;
	}
	return 0;
}
