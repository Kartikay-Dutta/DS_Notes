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


// Temp calc
// #include <iostream>
// using namespace std;

// int main() {
//     double temp;
//     cin >> temp;
//     char type;
//     cin >> type;

//     if (type == 'c' || type == 'C') {
//         double far = (temp * 1.8) + 32;
//         double kel = temp + 273.15;
//         cout << "Original (C): " << temp << endl;
//         cout << "Far: " << far << endl;
//         cout << "Kel: " << kel << endl;
//     }
//     else if (type == 'f' || type == 'F') {
//         double cel = (temp - 32) * 5.0 / 9.0;
//         double kel = cel + 273.15;
//         cout << "Original (F): " << temp << endl;
//         cout << "Cel: " << cel << endl;
//         cout << "Kel: " << kel << endl;
//     }
//     else if (type == 'k' || type == 'K') {
//         double cel = temp - 273.15;
//         double far = (cel * 9.0 / 5.0) + 32;
//         cout << "Original (K): " << temp << endl;
//         cout << "Cel: " << cel << endl;
//         cout << "Far: " << far << endl;
//     }
//     else {
//         cout << "Incorrect value, use c, f, or k.";
//     }

//     return 0;
// }


// Password strength checker
// #include <iostream>
// using namespace std;

// int main() {
//     string password;
//     cout << "Enter your password: ";
//     cin >> password;

//     int i = 0;
//     int upper = 0, lower = 0, digit = 0, special = 0;

//     // Analyze each character using while loop
//     while (i < password.length()) {
//         char ch = password[i];
//         if (ch >= 'A' && ch <= 'Z') {
//             upper++;
//         } else if (ch >= 'a' && ch <= 'z') {
//             lower++;
//         } else if (ch >= '0' && ch <= '9') {
//             digit++;
//         } else {
//             special++;
//         }
//         i++;
//     }

//     // Count categories present
//     int categories = 0;
//     if (upper > 0) categories++;
//     if (lower > 0) categories++;
//     if (digit > 0) categories++;
//     if (special > 0) categories++;

//     // Display detailed analysis
//     cout << "\nPassword Analysis:\n";
//     cout << "Length: " << password.length() << endl;
//     cout << "Uppercase letters: " << upper << endl;
//     cout << "Lowercase letters: " << lower << endl;
//     cout << "Digits: " << digit << endl;
//     cout << "Special characters: " << special << endl;
//     cout << "Categories present: " << categories << endl;

//     // Determine password strength using nested if
//     string strength;
//     if (password.length() < 6 || categories <= 2) {
//         strength = "Weak";
//     } else {
//         if (password.length() >= 6 && password.length() <= 8) {
//             if (categories >= 3) {
//                 strength = "Medium";
//             } else {
//                 strength = "Weak";
//             }
//         } else { // length >= 9
//             if (categories == 4) {
//                 strength = "Strong";
//             } else {
//                 strength = "Medium";
//             }
//         }
//     }

//     cout << "\nPassword Strength: " << strength << endl;

//     return 0;
// }


