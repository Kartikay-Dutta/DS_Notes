#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private variable
public:
    BankAccount() {
        balance = 0;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdraw amount or insufficient balance!" << endl;
        }
    }
    double getBalance() {
        return balance;
    }
};
int main() {
    BankAccount acc1, acc2;
    acc1.deposit(1000);
    acc2.deposit(500);
    acc1.withdraw(200);
    acc2.withdraw(200);
    cout << "Account 1 Balance: " << acc1.getBalance() << endl;
    cout << "Account 2 Balance: " << acc2.getBalance() << endl;
    // acc1.balance = 5000;  // Not allowed, balance is private

    return 0;
}
