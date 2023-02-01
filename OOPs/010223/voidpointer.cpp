#include<iostream>
using namespace std;
 int main() {
    float a = 0.5;
    int b = 10;
    void *ptr1 = &a;
    void *ptr2 = &b;
    
    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;

    cout << "*ptr1: " << *(float *)ptr1 << endl;
    cout << "*ptr2: " << *(int *)ptr2 << endl;

    void *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;

    cout << "*ptr1: " << *(int *)ptr1 << endl;
    cout << "*ptr2: " << *(float *)ptr2 << endl;

    // ptr1 = (int *)ptr1;
    // ptr2 = (float *)ptr2;

    // cout << "*ptr1: " << *ptr1 << endl;
    // cout << "*ptr2: " << *ptr2 << endl;
 }