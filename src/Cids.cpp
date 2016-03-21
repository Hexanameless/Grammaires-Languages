#include "Cids.h"



Cids::Cids()
{
}


Cids::~Cids()
{
	Cids::mapCid.clear();
}

void Cids::addCid(Id aId)
{
	Cids::mapCid.insert(pair<Id, Val>(aId, (Val)(0)));
}

void Cids::affecter(Id aId, Val aVal)
{
	Cids::mapCid[aId] = aVal;
}

