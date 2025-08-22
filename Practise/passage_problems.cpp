// Employee salary
// #include<iostream>
// using namespace std;
// struct Employee{
//     int id;
//     string name;
//     double salary;
//     int exp;
// };
// int main(){
//     Employee e;
//     cin>>e.id;
//     cin>>e.name;
//     cin>>e.salary;
//     cin>>e.exp;
//     int bonus =0;
//     int total_salary = 0;
//     int bonus_rate = 0;
//     if(e.exp<2){
//         bonus = e.salary*0.05;
//         total_salary = e.salary +e.salary*0.05;
//         bonus_rate = 5;
//     }  
//     else if(e.exp>=2 && e.exp<=5){
//         bonus = e.salary*0.1;
//         total_salary = e.salary+e.salary*0.1;
//         bonus_rate = 10;
//     } 
//     else{
//         bonus = e.salary*0.15;
//         total_salary = e.salary+ e.salary*0.15;
//         bonus_rate = 15;
//     } 

//     cout<< "==Employee Details=="<<endl;
//     cout<<"ID: "<<e.id<<endl;
//     cout<<"Name: "<<e.name<<endl;
//     cout<<"Basic Salary: "<<e.salary<<endl;
//     cout<<"Experience: "<<e.exp<<endl;
//     cout<<"Bonus Rate: "<<bonus_rate<<endl;
//     cout<<"Bonus Amount: "<<bonus<<endl;
//     cout<<"Total Salary: "<<total_salary<<endl;

// }


#include <iostream>
using namespace std;

int main() {
    double temp;
    cin >> temp;
    char type;
    cin >> type;

    if (type == 'c' || type == 'C') {
        double far = (temp * 1.8) + 32;
        double kel = temp + 273.15;
        cout << "Original (C): " << temp << endl;
        cout << "Far: " << far << endl;
        cout << "Kel: " << kel << endl;
    }
    else if (type == 'f' || type == 'F') {
        double cel = (temp - 32) * 5.0 / 9.0;
        double kel = cel + 273.15;
        cout << "Original (F): " << temp << endl;
        cout << "Cel: " << cel << endl;
        cout << "Kel: " << kel << endl;
    }
    else if (type == 'k' || type == 'K') {
        double cel = temp - 273.15;
        double far = (cel * 9.0 / 5.0) + 32;
        cout << "Original (K): " << temp << endl;
        cout << "Cel: " << cel << endl;
        cout << "Far: " << far << endl;
    }
    else {
        cout << "Incorrect value, use c, f, or k.";
    }

    return 0;
}
