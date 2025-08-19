#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int getLength() const { return name.length(); } // const function
};

int main() {
    const Student s = {"Alice"};  // constant object with name Alice
    cout << "Name: " << s.name << endl;
    cout << "Length of name: " << s.getLength() << endl; // OK: getLength() is const
    return 0;
}
