#include <iostream>
#include <cmath> // for M_PI
using namespace std;

class Circle {
private:
    double radius;

public:
    // Parameterized constructor using initialization list
    Circle(double r) : radius(r) {}

    double area() {
        return M_PI * radius * radius;
    }
};

int main() {
    Circle c(5);  
    cout << "Area of circle: " << c.area() << endl;
    return 0;
}

