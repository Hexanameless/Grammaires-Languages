#include "Cids.h"



Cids::Cids()
{
}


Cids::~Cids()
{
	Cids::mapCid.clear();
}

std::list<Id> getId()
{
  std::list<Id> ids;
  MapCid::iterator it_type;

  for(it_type = Cids::mapCid.begin(); it_type != Cids::mapCid.end(); it_type++) {
    ids.push_back(it_type->first);
  }

  return ids;
}

void Cids::addCid(Id aId)
{
	Cids::mapCid.insert(pair<Id, Val>(aId, (Val)(NULL)));
}

void Cids::affecter(Id aId, Val & aVal)
{
	Cids::mapCid[aId] = aVal;
}
