#include<iostream>
using namespace std;
namespace Outer{
    namespace Inner{
        int x = 42;
    }
}
int main(){
    int y = Outer::Inner::x; // y = 42
    cout<< y;
}
