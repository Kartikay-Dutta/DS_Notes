#include<iostream>
using namespace std;

int main() {
    int arr[2][2];

    cout << "Enter elements for 2x2 array:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "\nThe 2x2 array is:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
