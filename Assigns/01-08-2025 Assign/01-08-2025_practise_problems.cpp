// Question 1
// #include<iostream>
// using namespace std;
// struct Book{
//     int pages;
//     double price;
// };
// int main(){
//     Book b1;
//     b1.pages = 10;
//     b1.price = 23.99;
//     cout<<"Book pages: "<< b1.pages<<endl;
//     cout<<"Book price: "<<b1.price<<endl;
// }


// Question 2
// #include <iostream>
// using namespace std;
// class Circle {
// public:
//     double radius; 
// };

// int main() {
//     Circle* c = new Circle;
//     c->radius = 4.2;
//     cout << "Radius of circle: " << c->radius << endl;
//     delete c;
//     return 0;
// }

// Question 3
#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // Create Date object on stack
    Date independenceDay = {15, 8, 1947};
    cout << independenceDay.day << "-" << independenceDay.month << "-" << independenceDay.year << endl;

    // Create Date object on heap
    Date* republicDay = new Date;
    republicDay->day = 26;
    republicDay->month = 1;
    republicDay->year = 1950;

    cout << republicDay->day << "-" << republicDay->month << "-" << republicDay->year << endl;

    // Free memory
    delete republicDay;

    return 0;
}
