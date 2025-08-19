#include<iostream>
using namespace std;
void change(int *x) {
   *x = 10;
}
int main() {
   int num = 5;
   change(&num);
   cout << num << endl; // Now 10!
   return 0;
}