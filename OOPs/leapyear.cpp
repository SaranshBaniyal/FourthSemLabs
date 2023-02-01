#include <iostream>
using namespace std;
int main (){
    cout << "Input a year: ";
    int n;
    cin >> n;
    if(n%4==0)
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";
    return 0;
}