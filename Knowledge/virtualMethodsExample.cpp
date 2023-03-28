#include <iostream>
#include <vector>

class Shape {
public:
    virtual ~Shape() {}
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    void draw() const override {
        std::cout << "Circle with radius " << radius << std::endl;
    }

private:
    double radius;
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width(width), height(height) {}

    void draw() const override {
        std::cout << "Rectangle with width " << width << " and height " << height << std::endl;
    }

private:
    double width;
    double height;
};

class Triangle : public Shape {
public:
    Triangle(double base, double height) : base(base), height(height) {}

    void draw() const override {
        std::cout << "Triangle with base " << base << " and height " << height << std::endl;
    }

private:
    double base;
    double height;
};

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(2.0));
    shapes.push_back(new Rectangle(3.0, 4.0));
    shapes.push_back(new Triangle(5.0, 6.0));

    for (Shape* shape : shapes) {
        shape->draw();
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
