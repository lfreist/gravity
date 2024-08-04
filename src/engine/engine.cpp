/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#include <gravity/engine/engine.h>

// _____________________________________________________________________________________________________________________
Engine::Engine() : window(sf::VideoMode(800, 600), "2D Game Engine") {}

// _____________________________________________________________________________________________________________________
void Engine::init() {
  // Initialize resources, load assets, etc.
}

// _____________________________________________________________________________________________________________________
void Engine::run() {
  while (window.isOpen()) {
    process_events();
    update();
    render();
  }
}

// _____________________________________________________________________________________________________________________
void Engine::process_events() {
  sf::Event event{};
  while (window.pollEvent(event)) {
    if (event.type == sf::Event::Closed)
      window.close();
    inputManager.handleEvent(event);
  }
}

// _____________________________________________________________________________________________________________________
void Engine::update() {
  currentScene.update();
}

// _____________________________________________________________________________________________________________________
void Engine::render() {
  window.clear();
  renderer.render(currentScene);
  window.display();
}
