#include <iostream>
using namespace std;

class A {
public:

    virtual void draw() { // virtual so it can be overridden
        cout << "idk dawg\n";
    }
};

class child : public A {
public:

    void draw() override {
        cout << "huh?\n";
    }
};

int main() {
    child c;
    c.draw();
    
}
