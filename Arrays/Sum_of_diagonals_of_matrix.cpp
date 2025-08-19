#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int primarySum   = 0;           // Sum of main diagonal
    int secondarySum = 0;           // Sum of secondary diagonal

    cout << "Enter elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {        // i++ (post‑increment)
        for (int j = 0; j < 3; j++) {    // j++ (post‑increment)
            cout << "Element [" << i << "][" << j << "]: ";
            cin  >> arr[i][j];

            if (i == j)            primarySum   += arr[i][j];  // primary diagonal
            if (i + j == 2)        secondarySum += arr[i][j];  // secondary diagonal as the sum of the indices of it is always 2 [(0,2);(1,1);(2,0)]
        }
    }

    // // ----- Display matrix -----
    // cout << "\nThe 3x3 matrix is:\n";
    // for (int i = 0; i < 3; i++) {        // i++ again
    //     for (int j = 0; j < 3; j++) {    // j++ again
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }


    cout << "\nPrimary diagonal sum   : " << primarySum              << '\n';
    cout << "Secondary diagonal sum : " << secondarySum            << '\n';
    cout << "Total of both diagonals: " << (primarySum + secondarySum) << '\n';

    return 0;
}
