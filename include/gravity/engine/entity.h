/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#pragma once

#include <vector>
#include <memory>

#include <gravity/engine/component.h>

class Entity {
 public:
  Entity() = default;
  ~Entity() = default;

  void update();
  void add_component(std::unique_ptr<Component>&& component);

 private:
  std::vector<std::unique_ptr<Component>> components;
};