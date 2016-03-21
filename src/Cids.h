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
	void addCid(Id);
	void affecter(Id, Val);
	static MapCid mapCid;
};

