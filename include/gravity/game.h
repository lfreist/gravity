/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 *
 * This file is part of gravity.
 */

#pragma once

#include <gravity/engine/engine.h>

class Game {
 public:
  Game() = default;
  ~Game() = default;

  void run();

 private:
  Engine engine;
};