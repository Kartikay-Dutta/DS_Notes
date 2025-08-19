#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Default constructor
    Rectangle() {
        width = 1;
        height = 1;
        cout << "Rectangle created with width = " << width << " and height = " << height << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }
};

int main() {
    Rectangle r1;  
    return 0;
}
