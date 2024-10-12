#include "spaceGame.hpp"

spaceGame::spaceGame() : window(sf::VideoMode(800, 600), "SFML Window") {}

void spaceGame::run() {
    while (window.isOpen()) {
        handleEvents();
        window.clear();
        window.display();
    }
}

void spaceGame::handleEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}