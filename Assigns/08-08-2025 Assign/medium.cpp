#include <iostream>
using namespace std;

class Beta; // Forward declaration

class Alpha {
private:
    int secret;
public:
    Alpha(int s) : secret(s) {}

    // Make Beta a friend class
    friend class Beta;
};

class Beta {
public:
    void revealSecret(const Alpha &a) {
        cout << "Alpha's secret is: " << a.secret << endl;
    }
};

int main() {
    Alpha a1(42);
    Beta b1;

    b1.revealSecret(a1); // Beta can access Alpha's private data

    return 0;
}
