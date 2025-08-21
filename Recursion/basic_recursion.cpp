#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return; // Base Case
    cout<<n<<""; //Work
    fun(n-1); // Recursive call
}
int main(){
    fun(5);
}