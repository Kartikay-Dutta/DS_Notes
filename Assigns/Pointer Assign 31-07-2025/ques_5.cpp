#include <iostream>
using namespace std;

class Calculator {
public:
    // 1. Two integers (returns sum)
    int process(int a, int b) {
        return a + b;
    }

    // 2. Two pointers to integers (returns sum of values pointed to)
    int process(int* a, int* b) {
        return *a + *b;
    }

    // 3. An integer by reference (doubles the value and returns it)
    int process(int &a) {
        a = a * 2;
        return a;
    }

    // 4. An integer by value and an integer by pointer (returns their product)
    int process(int a, int* b) {
        return a * (*b);
    }
};

int main() {
    Calculator calc;

    int x = 10, y = 20;

    cout << "Sum of two integers: " << calc.process(x, y) << endl;

      
    cout << "Sum of two pointers: " << calc.process(&x, &y) << endl;

    // 3. Integer by reference
    cout << "Double of x using reference: " << calc.process(x) << endl;
    cout << "x after doubling: " << x << endl;

    // 4. Integer by value and pointer
    cout << "Product of int and pointer: " << calc.process(5, &y) << endl;

    return 0;
}
