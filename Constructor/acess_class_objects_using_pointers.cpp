#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    int pages;
};
int main(){
    Book b; // Objec(instance)
    b.title = "1984";
    b.pages = 328;
    cout<<b.title<<endl; // using dot operator

    Book* ptr = new Book;
    ptr -> title = "C++ Primer";
    ptr -> pages = 900;
    cout<<ptr->title<<endl; // Using rrow operator
    delete ptr; // Dont forget to delete the pointer
}