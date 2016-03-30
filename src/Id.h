#if ! defined ( ID_H )
#define ID_H

#include <string>
#include <list>

#include "Exp.h"
#include "Val.h"

class Id : public Exp
{
//----------------------------------------------------------------- PUBLIC
public:

  Id ( const Id & Id );
  Id ( );
  Id (std::string);
  virtual ~Id ( );

  bool operator<(const Id & second) const;
  bool operator==(const Id & second) const;

  std::list<std::string> getListeId();
  std::string getNomId();
  double evaluation(const std::map<std::string,Exp*> & variables);
  Exp* optimisation(const std::map<std::string,Val*> & variables);
  void afficher();

//------------------------------------------------------------------ PRIVE
protected:

  std::string nomId;

};

#endif // ID_H
