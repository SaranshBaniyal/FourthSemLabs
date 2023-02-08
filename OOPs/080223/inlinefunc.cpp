#include<iostream>
using namespace std;

inline void add(int a, int b){
    cout << "Sum: " << a+b << endl;
}
int main(){
    int a,b;
    cout << "Input values of a and b: ";
    cin >> a >> b;
    add(a,b);
}