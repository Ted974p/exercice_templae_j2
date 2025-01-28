#include "pch.h"
#include "Player.h"
#include <iostream>


Player::Player()
{
	mtexture.loadFromFile("../../../src/exercice2/sprite/LeMalefiqueDubidou.png");
    if (!mtexture.loadFromFile("../../../src/exercice2/sprite/LeMalefiqueDubidou.png"))
    {
        // Gérer l'erreur ici, par exemple en affichant un message d'erreur.
        std::cerr << "Erreur de chargement de la texture pour l'ennemi 1" << std::endl;
    }
	getSprite().setTexture(mtexture);
}
