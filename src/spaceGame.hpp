#pragma once
#include "common.hpp"

class spaceGame {
public:
    spaceGame();
    void run();

private:
    void handleEvents();

    sf::RenderWindow window;
};