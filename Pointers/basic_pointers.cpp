#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* ptr = &x; // pointer of x
    cout<<ptr<<endl;
    int ** pptr = &ptr; //pointer of pointer
    cout<< pptr;
}