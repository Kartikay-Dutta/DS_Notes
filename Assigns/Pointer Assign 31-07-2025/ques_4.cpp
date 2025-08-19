#include <iostream>
using namespace std;

int calculateSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); 
    }
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr; 

   
    cout << "Array elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl<<endl;

   
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    cout << "Sum calculated in main using pointer arithmetic: " << sum << endl;
    cout<< endl;
    int sumFromFunction = calculateSum(arr, 5);
    cout << "Sum calculated using function: " << sumFromFunction << endl;
    cout<<endl;

    return 0;
}
