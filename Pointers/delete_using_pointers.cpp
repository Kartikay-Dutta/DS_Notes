#include<iostream>
using namespace std;

int main() {
    int *ptr = new int(10); // dynamically allocate memory and assign 10
    cout << "Value: " << *ptr << endl;

    delete ptr; // free the memory
    ptr = nullptr; // optional but good practice

    return 0;
}
