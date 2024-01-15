#pragma once

#include <string>

class Warrior {
public:
  Warrior();
  ~Warrior();

  void SetBravery(bool bravery) { Bravery = true; }

private:
  int WarriorsAge;
  bool Bravery;
  std::string Name;
};
