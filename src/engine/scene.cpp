/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#include <gravity/engine/scene.h>

// _____________________________________________________________________________________________________________________
void Scene::update() {
  for (auto& entity : entities)
    entity->update();
}

// _____________________________________________________________________________________________________________________
void Scene::add_entity(std::unique_ptr<Entity>&& entity) {
  entities.push_back(std::move(entity));
}