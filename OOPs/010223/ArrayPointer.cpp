#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr;
    ptr = arr;
    cout << ptr[3];
    return 0;
}