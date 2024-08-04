/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#pragma once

#include <SFML/Graphics.hpp>
#include <gravity/engine/scene.h>

class Renderer {
 public:
  Renderer() = default;
  ~Renderer() = default;

  void render(const Scene& scene);
};