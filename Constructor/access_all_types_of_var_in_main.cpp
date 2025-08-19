#include <iostream>
using namespace std;

int globalVar = 50; // Global var

class Demo {
private:
    int instVar; // Instance var

public:
    Demo(int val) {
        instVar = val;
    }

    int getInstanceVar() {
        return instVar;
    }
};

void showAllVariables(Demo &obj) {
    int localVar = 10;             // Local var
    static int staticVar = 20;     // Static var

    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Static Variable (before increment): " << staticVar << endl;
    staticVar++;
    cout << "Static Variable (after increment): " << staticVar << endl;
    cout << "Instance Variable: " << obj.getInstanceVar() << endl;
}

int main() {
    Demo obj(100); // for int variable

    showAllVariables(obj);
    cout << "----- Second Call -----" << endl;
    showAllVariables(obj);

    return 0;
}