#include<iostream>
using namespace std;
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int *ptr= arr1;
    cout<<*ptr;
}