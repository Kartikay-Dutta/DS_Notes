#include<iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    double salary;
    int exp;
};
int main(){
    Employee e;
    cin>>e.id;
    cin>>e.name;
    cin>>e.salary;
    cin>>e.exp;
    int bonus =0;
    int total_salary = 0;
    int bonus_rate = 0;
    if(e.exp<2){
        bonus = e.salary*0.05;
        total_salary = e.salary +e.salary*0.05;
        bonus_rate = 5;
    }  
    else if(e.exp>=2 && e.exp<=5){
        bonus = e.salary*0.1;
        total_salary = e.salary+e.salary*0.1;
        bonus_rate = 10;
    } 
    else{
        bonus = e.salary*0.15;
        total_salary = e.salary+ e.salary*0.15;
        bonus_rate = 15;
    } 

    cout<< "==Employee Details=="<<endl;
    cout<<"ID: "<<e.id<<endl;
    cout<<"Name: "<<e.name<<endl;
    cout<<"Basic Salary: "<<e.salary<<endl;
    cout<<"Experience: "<<e.exp<<endl;
    cout<<"Bonus Rate: "<<bonus_rate<<endl;
    cout<<"Bonus Amount: "<<bonus<<endl;
    cout<<"Total Salary: "<<total_salary<<endl;

}
