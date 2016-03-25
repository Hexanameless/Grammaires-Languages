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

  for(it_type iterator = mapCid.begin(); iterator != mapCid.end(); iterator++) {
    ids.push_back(iterator->first);
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

MapCid Cids::getMapCid()
{
  return this->mapCid;
}
