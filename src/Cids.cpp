#include "Cids.h"



Cids::Cids()
{
}


void Cids::affecter(Id aId, Val aVal)
{
	Cids::mapCid.insert(pair<Id, Val>(aId, aVal));
}
