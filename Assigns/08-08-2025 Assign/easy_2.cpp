#include <iostream>
using namespace std;

class Vault {
private:
    int code;
public:
    Vault(int c) : code(c) {}

    // Friend function declaration
    friend void showSecret(const Vault& v);
};

// Friend function definition
void showSecret(const Vault& v) {
    cout << "Secret code: " << v.code << endl;
}

int main() {
    Vault v1(12345);
    showSecret(v1); // Can access private member code
    return 0;
}
