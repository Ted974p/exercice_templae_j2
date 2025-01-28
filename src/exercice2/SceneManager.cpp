#include "pch.h"
#include "SceneManager.h"

SceneManager::SceneManager()
{
	mwindow =new sf::RenderWindow (sf::VideoMode(1200, 750), "Shooter Game");
	mwindow->clear(sf::Color::Black);
	mwindow->display();
}

void SceneManager::update(Entity* entity)
{
}

void SceneManager::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
}

sf::RenderWindow* SceneManager::getwindow()
{
	return mwindow;
}
