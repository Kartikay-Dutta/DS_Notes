#include<iostream>
using namespace std;
namespace{
    int hidden = 5;
}
// namespace{
//     int hidden = 10; // Will show error, previosly declared
// }
int main(){
    int y = hidden;
    cout<<y;
}