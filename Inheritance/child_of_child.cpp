#include <iostream>
using namespace std;

class Base {
public:
    void fun() {
        cout << "Hello" << endl;
    }
};


class ChildBase : protected Base {
    // fun() protected inside ChildBase
};

class GrandChildPublic : public ChildBase {
public:
    void callFun() {
        fun(); //fun() protected in ChildBase
    }
};

class GrandChildProtected : protected ChildBase {
public:
    void callFun() {
        fun();
    }
};

class GrandChildPrivate : private ChildBase {
public:
    void callFun() {
        fun();
    }
};

int main() {
    GrandChildPublic g1;
    GrandChildProtected g2;
    GrandChildPrivate g3;

    g1.callFun(); 
    g2.callFun(); 
    g3.callFun(); 

    // g1.fun(); 
}
