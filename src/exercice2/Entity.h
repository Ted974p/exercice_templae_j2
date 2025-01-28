#pragma once

#include <SFML/Graphics.hpp>

class Entity : public sf::Transformable, public sf::Drawable
{
	sf::CircleShape mhitbox;
	sf::Sprite msprite;
public:
	virtual void sprite();
	sf::Sprite getSprite();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

