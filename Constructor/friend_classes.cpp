#include<iostream>
using namespace std;

class Engine; // forward declaration

class Car {
private:
    int speed;
public:
    Car(int s) : speed(s) {}
    friend class Engine; // Engine is a friend
};

class Engine {
public:
    void printSpeed(const Car &c) {
        cout << "Speed: " << c.speed << endl; // Can access private speed.
    }
};

int main() {
    Car c1(100);          // Create Car object
    Engine e1;            // Create Engine object
    e1.printSpeed(c1);    // Call Engine's method with Car object
    return 0;
}
