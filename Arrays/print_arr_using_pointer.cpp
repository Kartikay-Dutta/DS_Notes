#include<iostream>
using namespace std;
int main(){
    int numbers[5] = {1,2,3,4,5};
 // int *p = numbers; and int*p = &num[0]; both are the same thing
    int *p = numbers;
    for(int i = 0; i<5;++i){
        cout<< *(p+i)<< " ";
    }
}

