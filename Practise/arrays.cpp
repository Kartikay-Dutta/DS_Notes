// Reversing an array
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     // Input
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Reverse in-place
//     for(int i = 0; i < n/2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }

//     // Print reversed array
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// Largest number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int arr[n];
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = 0;
//     for(int i= 0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }


// Palindrome
// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n = s.length();
//     bool isPalin = true;
//     for(int i = 0;i<n/2;i++){
//         if(s[i]!=s[n-i-1]){
//             isPalin = false;
//             break;
//         }
//     }
//     if(isPalin == true){
//         cout<<"It is a palindrome.";
//     }
//     else{
//         cout<<"It is not a Palindrome";
//     }
// }


// Frequency of a num in array
#include <iostream>
using namespace std;

int main() {
    int arr[100], freq[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[i] = -1;
    }

    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    cout << "Element\tFrequency\n";
    for(int i = 0; i < n; i++) {
        if(freq[i] != 0) {
            cout << arr[i] << "\t" << freq[i] << endl;
        }
    }

     return 0;
}