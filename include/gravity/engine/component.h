/**
 * Copyright 2024, Leon Freist (https://github.com/lfreist)
 * Author: Leon Freist <freist.leon@gmail.com>
 * 
 * This file is part of gravity.
 */

#pragma once


class Component {
 public:
  virtual ~Component() {}
  virtual void update() = 0;
};