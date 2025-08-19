#include<iostream>
using namespace std;

class Base {
 public:
    void fun() {
        cout << "Hello";
    }
};

class ChildBase : public Base {
};

int main() {
    ChildBase b1; // Create object of ChildBase
    b1.fun();     // Access inherited function
    return 0;
}


