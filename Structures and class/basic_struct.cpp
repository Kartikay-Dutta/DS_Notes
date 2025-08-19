#include<iostream>
using namespace std;
struct Student{
    int id;
    double marks;
};
int main(){
    Student s1; // Create a Point(object)
    s1.id = 101;
    s1.marks = 93;
    cout<< "Student id: "<<s1.id<<endl;
    cout<< "Student marks: "<<s1.marks<<endl;
    return 0;
}           


