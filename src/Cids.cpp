#include "Cids.h"



Cids::Cids()
{
}


void Cids::addCid(Id aId)
{
	Cids::mapCid.insert(pair<Id, Val>(aId, (Val)(NULL)));
}

void Cids::affecter(Id aId, Val aVal)
{
	Cids::mapCid[aId] = aVal;
}
