#include <iostream>
using namespace std;


void cbv(int num) {
    num = num * 2; 
    cout << "Inside function (local change): " << num << endl;
}


void cbr(int &num) {
    num = num * 2; 
    cout << "Inside function (affects original): " << num << endl;
}

int main() {
    int value = 10;

    cout << "Original Value: " << value << endl;


    cbv(value);
    cout << "After double by value: " << value << endl;


    cbr(value);
    cout << "After double by reference: " << value << endl;

    return 0;
}
