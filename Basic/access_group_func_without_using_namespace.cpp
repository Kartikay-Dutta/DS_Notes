// Without using namespace
#include <iostream>
using namespace std;

namespace MyMath {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    int result = MyMath::add(6, 7);  
    cout << result << endl;
    return 0;
}
