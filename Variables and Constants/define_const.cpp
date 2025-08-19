#include<iostream>
using namespace std;
#define x = 10 //using define (faster)(define ki debugging nhi hoti)

const int y = 10; // using const
int main(){
    const int y = 20; // we cant change const but we can declare it again
    cout<< y; //20
    cout<<endl;
    cout<<::y;//10
}

