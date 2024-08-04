/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#pragma once

#include <vector>
#include <memory>
#include <gravity/engine/entity.h>

class Scene {
 public:
  Scene() = default;
  ~Scene() = default;

  void update();
  void add_entity(std::unique_ptr<Entity>&& entity);

 private:
  std::vector<std::unique_ptr<Entity>> entities;
};