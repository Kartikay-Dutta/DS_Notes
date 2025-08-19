#include<iostream>
using namespace std;
class bankAccount{
    private:
     double balance; // hidden i.e no direct access

    public:
     void deposit(double amount){balance += amount;}
     double getBalance(){return balance;}
};
int main(){
    bankAccount acct;
    // acct.balance  = 1000.55; we cant access it coz its hidden
    acct.deposit(100);
    cout<<acct.getBalance()<<endl;
}