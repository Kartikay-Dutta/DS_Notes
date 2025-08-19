#include <iostream>
#include <memory>
using namespace std;
int main() {
 unique_ptr<int> p1(new int(42));
 cout << "Number: " << *p1 << endl;
 return 0;
}
// You cant copy a unique pointer