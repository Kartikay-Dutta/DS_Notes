// #include<iostream>
// using namespace std;
// class Demo{
//     public:
//     static int counter; // Declaration inside class
//     Demo(){counter++;}
// };
// int Demo::counter = 0; // Definition outside class

// int main(){
//     Demo a,b;
//     cout<<Demo::counter<<endl; // Prints 2 without making object of the class
//     return 0;
// }


#include<iostream>
using namespace std;
class Test{
    public:
    static int square(int x){return x*x;}
};
int main(){
    cout<< Test::square(5)<<endl; // Prints 25, no object needed
    return 0;
}