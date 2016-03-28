#include "Cids.h"


MapCid Cids::mapCid = MapCid();


Cids::Cids()
{
	this->idSymbole = CIDS;
}

Cids::~Cids()
{
	mapCid.clear();
}

std::list<Id> Cids::getId()
{
  std::list<Id> ids;
  MapCid::iterator it_type;

  for(it_type = mapCid.begin(); it_type != mapCid.end(); it_type++) {
    ids.push_back(*it_type->first);
  }

  return ids;
}

void Cids::affecter(Id* aId, Val* aVal)
{
	mapCid.insert(pair<Id*, Val*>(aId, aVal));
}

MapCid Cids::getMapCid()
{
  return mapCid;
}
