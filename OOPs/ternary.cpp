#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    int max = (a>b)? ((a>c) ? a : c) : ((b>c) ? b : c);
    cout << "Max: " << max;
    return 0;
}