#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    if(n & 1){
        cout<< "The number is odd.";
    }
    else if(n&0){
        cout<< "The number is even.";
    }
    else{
        cout<<"The number 0 is neither even nor odd.";
    }
}