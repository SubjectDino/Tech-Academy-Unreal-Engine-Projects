#include <iostream>
#include <cmath> // For M_PI to calculate circle area
using namespace std;

// Base Class: Shape
class Shape {
protected:
    string color; // Inherited property
public:
    // Constructor to set color
    Shape(string c) : color(c) {}

    // Virtual method to calculate area
    virtual double getArea() = 0;

    // Display the color
    void displayColor() {
        cout << "Color: " << color << endl;
    }
};

// Subclass: Rectangle
class Rectangle : public Shape {
private:
    double height;
    double width;
public:
    // Constructor to initialize properties
    Rectangle(string c, double h, double w) : Shape(c), height(h), width(w) {}

    // Overridden method to calculate area
    double getArea() override {
        return height * width;
    }
};

// Subclass: Triangle
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    // Constructor to initialize properties
    Triangle(string c, double b, double h) : Shape(c), base(b), height(h) {}

    // Overridden method to calculate area
    double getArea() override {
        return 0.5 * base * height;
    }
};

// Subclass: Circle
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor to initialize properties
    Circle(string c, double r) : Shape(c), radius(r) {}

    // Overridden method to calculate area
    double getArea() override {
        return M_PI * radius * radius;
    }
};

// Main Function
int main() {
    // Create objects for each subclass
    Rectangle rect("Red", 5.0, 3.0);
    Triangle tri("Blue", 4.0, 6.0);
    Circle cir("Green", 2.5);

    // Display Rectangle details
    cout << "Rectangle:" << endl;
    rect.displayColor();
    cout << "Area: " << rect.getArea() << endl << endl;

    // Display Triangle details
    cout << "Triangle:" << endl;
    tri.displayColor();
    cout << "Area: " << tri.getArea() << endl << endl;

    // Display Circle details
    cout << "Circle:" << endl;
    cir.displayColor();
    cout << "Area: " << cir.getArea() << endl;

    return 0;
}