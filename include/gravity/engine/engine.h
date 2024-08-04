/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 *
 * This file is part of gravity.
 */

#pragma once

#include <SFML/Graphics.hpp>

#include <gravity/engine/input_manager.h>
#include <gravity/engine/renderer.h>
#include <gravity/engine/scene.h>

class Engine {
 public:
  Engine();
  ~Engine() = default;
  void init();
  void run();

 private:
  void process_events();
  void update();
  void render();

  sf::RenderWindow window;
  Renderer renderer;
  InputManager inputManager;
  Scene currentScene;
};