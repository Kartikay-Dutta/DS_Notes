#include<iostream>
using namespace std;
class Number{
    public:
     int value;
};
int main(){
    Number a;
    a.value = 20;
    Number b;
    b.value = 50;
    cout<<a.value<<" "<< b.value;
    cout<<endl;
    return 0;
}
// Output is 20 and 50, so they are two different objects.