#include <iostream>
#include <memory>
using namespace std;
int main() {
 shared_ptr<int> p1(new int(99));
 shared_ptr<int> p2 = p1; // Both share the memory
 cout << "p1: " << *p1 << ", p2: " << *p2 << std::endl;
 cout << "Count: " << p1.use_count() <<endl;
 return 0;
}