#pragma once
#include "MobsList.h"
#include "Player.h"
#include <SFML/Graphics.hpp>
#include "SceneManager.h"
class GameManager 
{
	MobsList* mlist;
	Player* mplayer;
	SceneManager mscene;
public:
	GameManager();
	int run();
	void init(int lv);
	void update();

};
