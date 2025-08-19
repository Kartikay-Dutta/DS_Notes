#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a, int b) : x(a), y(b){
        //constructor initializes x and y with provided values
    }
    int getx() const{ return x;}
    int setx(int val){ x = val;}
};
int main(){
    point p1(3,4);
    return 0;
}