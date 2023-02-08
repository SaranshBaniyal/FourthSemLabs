#include<iostream>
using namespace std;

inline int add(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout << "Input values of a and b: ";
    cin >> a >> b;
    int c = add(a,b);
    cout << "Sum: " << c;
}