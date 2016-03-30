#include <iostream>
#include <fstream>
#include <getopt.h>
#include <string>
#include "Automate.h"

using namespace std;
int main(int argc, char* argv[])
{

	if (argc == 1)
	{
		cerr << "Erreur, veuillez specifier des arguments"<< endl;
		cerr << "Utilisation :" << endl;
		cerr << "../lut [-p] [-a] [-e] [-o] source.lt" << endl;
		cerr << "[-p] affiche le code source reconnu" << endl;
		cerr << "[-a] analyse le programme de maniere statique" << endl;
		cerr << "[-e] execute interactivement le programme" << endl;
		cerr << "[-o] optimise les expressions et instructions" << endl;
		return 1;
	}
	else
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
					break;
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

			Automate automate(prog, affichage, analyseStatique, execution, transformation);

			fichier.close();
		}
		else
		{
			cerr << "Erreur a l'ouverture du fichier "<< argv[argc-1] << endl;
			return 1;
		}
	}
	
	return 0;
}
