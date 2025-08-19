#include<iostream>
using namespace std;
int calculate(int a,int b){
    return a+b;
}
float calculate(float a, float b){
    return a*b;
}
float calculate(int a, int b, int c){
    return (a+b+c)/3.0f;
}
int main(){
    int sum = calculate(10,20);
    cout<< "Sum: "<<sum<<endl;
    float prod = calculate(2.5f, 5.4f);
    cout<<"Product: "<<prod<<endl;
    float avg = calculate(10,20,30);
    cout<<"Average: "<<avg <<endl;
}