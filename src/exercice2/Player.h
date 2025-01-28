#pragma once
#include "Entity.h"
class Player : public Entity
{
	sf::Texture mtexture;
	
public:
	Player();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override
	{

	}
};

