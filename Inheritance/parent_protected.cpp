#include <iostream>
using namespace std;

class Base {
protected: // Accessible in child, not outside
    void fun() {
        cout << "Hello";
    }
};

class ChildBase : public Base {
public:
    void callFun() { // Public method to access protected fun()
        fun(); // Call parent's protected function
    }
};

int main() {
    ChildBase b1;
    b1.callFun(); // Works because callFun is public
    return 0;
}
