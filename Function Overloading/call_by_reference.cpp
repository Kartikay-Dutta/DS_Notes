#include<iostream>
using namespace std;
void change(int &x){
    x = 10;
}
int main(){
    int num = 5;
    change(num);
    cout<< num<<endl; // The value will be 10
}