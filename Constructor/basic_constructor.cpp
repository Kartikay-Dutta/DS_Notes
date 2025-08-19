// #include<iostream>
// using namespace std;

// class Point{
//     private:
//      int x;
//      int y;

//     public:
//      Point(int a, int b):x(a),y(b){
//         cout<<"Point initialized with x = " << x<<" and y = "<<y<<endl;
//      }
// };
// int main(){
//     Point p1(3,4);
//     return 0;
// }


#include<iostream>
using namespace std;

class Example{
    private:
     const int value;
     int&  ref;

    public:
     Example(int v, int& r): value(v),ref(r){
        cout<<"Const value: " << value<<" | Refernce value: "<<ref<<endl;
     }
};
int main(){
    int num = 10;
    Example ex(5,num);
    return 0;
}