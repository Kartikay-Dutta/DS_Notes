#include<iostream>
using namespace std;
class Shape{
    public:
     void Displayshape(){
        cout<<"This is a shape.\n";
     }
};
class Circle : public Shape{
    public:
    void Display(){
        cout<<"This is a Circle\n";
    }
};
class Rectangle : public Shape{
    public:
    void Display(){
        cout<<"This is a Rectangle\n";
    }
};
int main(){
    Circle c;
    Rectangle r;
    c.Displayshape();
    c.Display();
    r.Displayshape();
    r.Display();
}