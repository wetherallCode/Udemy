#include "Character.h"
#include <iostream>
#include <string>

class Object {
public:
  virtual void BeginPlay();
};

class Actor : public Object {
public:
  virtual void BeginPlay() override;
};

class Pawn : public Actor {
public:
  virtual void BeginPlay() override;
};

int main() {
  Object *ptr_to_obj = new Object;
  Actor *ptr_to_actor = new Actor;
  Pawn *ptr_to_pawn = new Pawn;

  Object *ObjectArray[]{ptr_to_actor, ptr_to_actor, ptr_to_pawn};

  for (int i = 0; i < 3; i++) {
    ObjectArray[i]->BeginPlay();
  }

  std::cout << "Changed this line and now I'm going to recommit" << '\n';

  delete ptr_to_obj;
  delete ptr_to_actor;
  delete ptr_to_pawn;

  return 0;
}

void Object::BeginPlay() { std::cout << "Object BeginPlay() called!" << '\n'; }
void Actor::BeginPlay() { std::cout << "Actor BeginPlay() called!" << '\n'; }
void Pawn::BeginPlay() { std::cout << "Pawn BeginPlay() called!" << '\n'; }
