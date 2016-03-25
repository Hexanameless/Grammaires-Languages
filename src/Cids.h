#pragma once
#include <map>
#include <list>
#include "Symbole.h"
#include "Id.h"
#include "Val.h"

using namespace std;
typedef map<Id, Val*> MapCid;

class Cids :
	public Symbole
{
public:
	Cids();
	virtual ~Cids();

	std::list<Id> getId();

	MapCid getMapCid();

	void addCid(Id);
	void affecter(Id, Val &);

	static MapCid mapCid;

//private:
	
};
