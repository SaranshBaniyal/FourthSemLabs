#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    int *ptr1 = ptr;
     cout << "Address in ptr: " << ptr <<endl;
     cout << "Value at the address (ptr): " << *ptr;
     cout << "Address in ptr1: " << ptr1 <<endl;
     cout << "Value at the address (ptr1): " << *ptr1;
     return 0;
}