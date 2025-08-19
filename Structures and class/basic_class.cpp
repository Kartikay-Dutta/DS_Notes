#include<iostream>
using namespace std;
class Rectangle{
    public:
    int width;
    int height;
};
int main(){
    Rectangle box;
    box.width = 10;
    box.height = 5;
    cout<<"Area of the rectangle: "<<box.width*box.height<<endl;
}