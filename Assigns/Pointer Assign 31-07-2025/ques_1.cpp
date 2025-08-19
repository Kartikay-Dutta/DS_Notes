#include <iostream>
using namespace std;

// Function to find the pointer to the largest variable
int* findLargest(int* p1, int* p2, int* p3) {
   if(*p1>*p2 && *p1>*p3){
    return p1;
   }
   else if(*p2>*p1 && *p2>*p3){
    return p2;
   }
   else{
    return p3;
   }
}
int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    cout<<endl;
    cout << "Original Values and Address:"<<endl;
    cout << "a: Address = " << pa << ", Value = " << *pa << endl;
    cout << "b: Address = " << pb << ", Value = " << *pb << endl;
    cout << "c: Address = " << pc << ", Value = " << *pc << endl;
    cout<<endl;

    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;

    cout<<"Value after Swapping:"<< endl;
    cout<<"a: "<<*pa<<endl;
    cout<<"b: "<<*pb<<endl;
    cout<<"c: "<<*pc<<endl;
    cout<<endl;
    
    int* largest = findLargest(pa,pb,pc);

    *largest = 100;
    cout<<"Value after swapping to 100:"<<endl;
    cout<<"a: "<<*pa<<endl;
    cout<<"b: "<<*pb<<endl;
    cout<<"c: "<<*pc<<endl;
    cout<< endl;

}
