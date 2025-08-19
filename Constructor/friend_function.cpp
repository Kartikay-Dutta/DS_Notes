#include<iostream>
using namespace std;

class Box {
private:
    int secret;
public:
    Box(int s) : secret(s) {}
    friend void revealSecret(const Box& b);
};

void revealSecret(const Box& b) {
    cout << b.secret << endl; // allowed, friend can acess private members
}

int main() {
    Box b1(42);          
    revealSecret(b1);
    return 0;
}
