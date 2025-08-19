#include<iostream>
using namespace std;

class Person{
    public:
        void introduce(){
            cout<<"Hi I am a person.\n";
        }
};
class Student : public Person{
    public:
        void study(){
            cout<<"I am studying.\n";
        }
};
int main(){
    Student s;
    s.introduce();
    s.study();
}