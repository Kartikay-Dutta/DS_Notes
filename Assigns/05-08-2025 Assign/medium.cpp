#include<iostream>
using namespace std;
class Wallet {
    private:
     int balance = 0;
    public:
    int setBalance(int amount){
        balance = amount;
    }
    int getBalance(){
        return balance;
    }

};

int main() {
    Wallet w;
    // w.balance = 500; // Should be ERROR!
    w.setBalance(500);
    cout << w.getBalance() << endl; // Should print 500
    return 0;
}