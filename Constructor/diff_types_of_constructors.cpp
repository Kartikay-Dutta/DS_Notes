#include <iostream>
using namespace std;

class Demo {
public:
    int x; 

    // Non-parameterized 
    Demo() {
        x = 0;
    }

    // Parameterized 
    Demo(int a) {
        x = a;
    }

    // Pointer non-parameterized 
    Demo(Demo* ptr) {
        x = ptr->x;
    }

    // 4. Pointer-based parameterized 
    Demo(Demo* ptr, int a) {
        x = ptr->x + a;
    }
};

int main() {
    Demo d1;
    Demo d2(10);            
    Demo d3(&d2);          
    Demo d4(&d2, 5);      

    cout << "d1.x = " << d1.x << endl;
    cout << "d2.x = " << d2.x << endl;
    cout << "d3.x = " << d3.x << endl;
    cout << "d4.x = " << d4.x << endl;

    return 0;
}

     