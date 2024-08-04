/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#pragma once

#include <SFML/Window/Event.hpp>

class InputManager {
 public:
  InputManager() = default;
  ~InputManager() = default;

  void handleEvent(const sf::Event& event);
};