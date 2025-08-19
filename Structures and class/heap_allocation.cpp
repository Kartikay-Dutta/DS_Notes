#include<iostream>
using namespace std;
struct Point{
    int x;
    int y;
};
int main(){
    Point* p = new Point;
    p->x = 10;
    p->y = 20;
    delete p;
}