#include<iostream>
using namespace std;
void counter(){
    static int count = 0; //only created once
    count++; 
    cout<<count<<endl;
}

int main(){
    counter(); // 1
}