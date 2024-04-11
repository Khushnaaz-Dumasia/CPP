#include <iostream>
//#include <cmath>
using namespace std;
// Base class
class Shape {
public:
    virtual double calculateArea() = 0; // Pure virtual function
    virtual void display() {
        cout << "This is a generic shape." <<endl;
    }
};

// Derived class 1: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea(){
        return 3.14159265359 * radius * radius;
    }

    void display(){
        cout << "This is a Circle with radius " << radius <<endl;
    }
};

// Derived class 2: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    void display(){
        cout << "This is a Rectangle with length " << length << " and width " << width <<endl;
    }
};

// Derived class 3: Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea(){
        return 0.5 * base * height;
    }

    void display() {
        cout << "This is a Triangle with base " << base << " and height " << height <<endl;
    }
};

int main() {
    Shape* shapes[3];

    // Create objects of different shapes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0);

    shapes[0] = &circle;
    shapes[1] = &rectangle;
    shapes[2] = &triangle;

    for (int i = 0; i < 3; i++) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->calculateArea() <<endl;
    }

    return 0;
}
