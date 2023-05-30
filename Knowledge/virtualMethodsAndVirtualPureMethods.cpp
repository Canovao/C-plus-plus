#include <iostream>

class Shape {
public:
  virtual void draw() {
    // do nothing by default
  }
};

class Circle : public Shape {
public:
  void draw() override {
    // draw circle
  }
};

int main() {
  Shape* shapePtr = new Circle();
  shapePtr->draw(); // calls Circle's draw method
  delete shapePtr;
  return 0;
}


class Animal {
public:
  virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
  void makeSound() const override {
    std::cout << "Woof!" << std::endl;
  }
};

int main() {
  Animal* animalPtr = new Dog();
  animalPtr->makeSound(); // calls Dog's makeSound method
  delete animalPtr;
  return 0;
}
