#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0;  // Pure virtual function
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    void calculateArea() {
        double area = 3.14 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }
};


int main() {
    Shape* circle = new Circle(5.0);
    circle->calculateArea();


    delete circle;

    return 0;
}



