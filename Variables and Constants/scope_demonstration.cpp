#include<iostream>
using namespace std;
int x = 10; //global scope
int main(){
    int y; //function scope\local scope
    for(int j = 0;j<=x;j++){ //block scope
        cout<<j;
    }
}    