#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout << "Enter 1st number: ";
    cin>> a;
    cout << "Enter 2nd number: ";
    cin>>b;
    //Swap
    temp = a;
    a = b;
    b = temp;
    cout<<"After Swap:\n";
    cout<<"1st Number = "<< a << endl;
    cout<<"2nd Number = "<< b << endl;
    
}