#include<iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cin >> n; // Number of elements

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements
    }

    // Check for duplicates and print each only once
    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;

        // Check if this value has already been printed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted) {
            continue;
        }

        // Check if it's a duplicate
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << endl; // Print the duplicate once
                break;
            }
        }
    }

    return 0;
}
