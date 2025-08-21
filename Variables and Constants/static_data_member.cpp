#include<iostream>
using namespace std;
class Student{
    public:
     static int totalStudents; //declaration
     Student(){totalStudents ++;}
};

int Student::totalStudents = 0; //definition outside

int main(){
    Student s1,s2,s3;
    cout<<"Total Students: "<<Student::totalStudents;
}