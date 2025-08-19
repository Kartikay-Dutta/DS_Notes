#include <iostream>
using namespace std;

class Base {
public: // Public method in parent
    void fun() {
        cout << "Hello";
    }
};

class ChildBase : public Base {
protected: // Protected in child
    void callFun() {
        fun(); // Calls parent's public method
    }

public: // Public wrapper to access protected callFun()
    void accessFun() {
        callFun();
    }
};

int main() {
    ChildBase b1;
    b1.accessFun(); // Works via public wrapper
    return 0;
}
