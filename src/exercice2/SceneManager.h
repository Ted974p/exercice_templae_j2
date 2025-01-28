#pragma once
template<typename T>
#include "Entity.h"
#include <SFML/Graphics.hpp>
#include "template.cpp"

class SceneManager : public sf::Transformable, public sf::Drawable
{
	sf::RenderWindow* mwindow;

public:
	SceneManager();
	void update(Entity* entity);
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		sf::RenderWindow* getwindow();

		template<typenameT>
		void AddT(Entity* entity);

		T* getAllT();
};

template<typename T>
template<>
inline void SceneManager<T>::AddT(Entity* entity)
{
}
