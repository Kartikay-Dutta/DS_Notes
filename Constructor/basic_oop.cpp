#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    int pages;
};
int main(){
    Book myBook; // Objec(instance)
    myBook.title = "Fudd";
    myBook.pages = 310;
    cout<< myBook.title<<endl;
    cout<< myBook.pages<<endl;
}