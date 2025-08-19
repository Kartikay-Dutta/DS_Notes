#include<iostream>
using namespace std;

class A {
    int val;
public:
    // Parameterized constructor
    A(int v) : val(v) {}

    int getVal() const { return val; }
};

int main() {
    const A a(42); // initialize val to 42
    cout << a.getVal() << endl;
    return 0;
}
