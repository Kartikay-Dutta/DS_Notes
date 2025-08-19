#include<iostream>
using namespace std;
class bankAccount{
    private:
     double balance; // hidden i.e no direct access

    public:
     void deposit(double amount){balance += amount;}
     double getBalamce(){return balance;}
};
