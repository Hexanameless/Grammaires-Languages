/*************************************************************************
                           Lexer  -  description
                             -------------------
    début                : 07/03/2016
    copyright            : (C) 2016 par A. Menella
*************************************************************************/

//---------- Interface de la classe <Lexer> (fichier Lexer.h) ------
#if ! defined ( LEXER_H )
#define LEXER_H

#include <string>
#include <vector>

#include "Symbole.h"

class Lexer
{
//----------------------------------------------------------------- PUBLIC
public:

  Lexer ( const std::string & programme);
  virtual ~Lexer ( );

  std::vector<std::string> parseProgramme(std::string programme);
  bool is_number(const std::string & s);
  std::string to_string();
  Symbole * lireSuivant ();
  unsigned int getIndexSymboleCourant();
  void avancer();

//------------------------------------------------------------------ PRIVE
private:

  std::string programmeEnLecture;
  std::vector<std::string> symboles;
  int indexSymboleCourant;

};

#endif // LEXER_H
