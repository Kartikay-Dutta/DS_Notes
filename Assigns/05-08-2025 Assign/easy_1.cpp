#include<iostream>
using namespace std;
class Student{
    public:
     string name;
     int rollNo;
};
int main(){
    Student s;
    s.name = "Kartikay";
    s.rollNo = 10;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll No: "<<s.rollNo<<endl;
}