#pragma once

#include <string>

class Warrior {
public:
  Warrior();
  ~Warrior();

  void SetBraveryLevel(float level) { Bravery = level; }

private:
  int Age;
  float Bravery;
  std::string Name;
  int Rank;
  bool IsGood = true; // default initial
};
