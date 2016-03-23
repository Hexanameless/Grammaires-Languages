#pragma once
#include <map>
#include "Symbole.h"
#include "Id.h"
#include "Val.h"

using namespace std;
typedef map<Id, Val> MapCid;

class Cids :
	public Symbole
{
public:
	Cids();
	virtual ~Cids();

	void affecter(Id, Val);

private:
	static MapCid mapCid;
};
