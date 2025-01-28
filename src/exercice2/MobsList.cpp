#include "pch.h"
#include "MobsList.h"

MobsList::MobsList(int mobnumber)
{
	init(mobnumber);
}

void MobsList::init(int number)
{

}

Entity* MobsList::GetMob(int number)
{
	return mMobs[number];
}
