#include "pch.h"
#include "GameManager.h"
GameManager::GameManager()
{
	init(1);
	update();
}

int  GameManager::run()
{
	while (mscene.getwindow()->isOpen())
	{
		return 1;
	}
		return 2;
}

void GameManager::init(int lv)
{
	if (lv == 1)
	{
		mlist = new MobsList(6);
		mplayer = new Player;
	}
}

void GameManager::update()
{
	if (run() == 1)
	{
		update();
	}

}
