#include <iostream>
#include "lib1.h"
#include "lib2.h"

using namespace std;

int main() {
    int x = 5, y = 3;

    cout << "Lib1 calculate: " << Lib1::calculate(x, y) << endl;
    cout << "Lib2 calculate: " << Lib2::calculate(x, y) << endl;

    return 0;
}
