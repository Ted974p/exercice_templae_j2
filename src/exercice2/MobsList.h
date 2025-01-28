#pragma once
#include "Entity.h"
class MobsList
{
	Entity* mMobs[15];
public:
	MobsList(int mobnumber);
	void init(int number);
	Entity* GetMob(int number);

};

