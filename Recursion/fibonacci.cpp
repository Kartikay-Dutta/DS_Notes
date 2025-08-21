#include<iostream>
using namespace std;

int fibonacci(int n) {
    if(n == 0) return 0;   // Base case 1
    if(n == 1) return 1;   // Base case 2
    return fibonacci(n-1) + fibonacci(n-2); // Recursive case
}

int main() {
    int n = 10; // print first 10 Fibonacci numbers
    for(int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
