#include<iostream>
using namespace std;
void print(int x){
    cout<< "Int: "<< x<< endl;
}
void print(double x){
    cout<< "Double: "<< x<< endl;
}
int main(){
    print(5);
    print(3.14);
    return 0;
}