/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#include <gravity/engine/entity.h>

void Entity::update() {
  for (auto& component : components)
    component->update();
}

void Entity::add_component(std::unique_ptr<Component>&& component) {
  components.push_back(std::move(component));
}