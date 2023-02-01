#include <iostream>
using namespace std;
void arithmetic(int a, int b){
    cout << "Addition: " << a+b << endl;
    cout << "Substraction: " << a-b << endl;
    cout << "Multiplication: " << a*b << endl;
    cout << "Division: " << a/b << endl;
}
void relational(int a, int b){
    cout << "a>b: " << (a>b) << endl;
    cout << "a<b: " << (a<b) << endl;
}
void shift(int a, int b){
    int c = a<<b;
    int d = a>>b;
    cout << "Left Shift: " << c << endl;
    cout  << "Right Shift: " << d << endl ;
}
int main(){
    int a,b;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    arithmetic(a,b);
    relational(a,b);
    shift(a,b);
    return 0;
}