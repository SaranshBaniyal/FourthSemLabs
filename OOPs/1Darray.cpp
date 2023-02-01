#include<iostream>
using namespace std;
int main(){

    //dynamic
    cout << "Input size of array A: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Input values for array A: " << endl;
    for(int i=0; i<n; i++)
        cin >> a[i];

    cout << "Array A: "<< endl;
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    
    //static
    int b[] = {11,12,13,14,15};
    cout << endl << "Array B: " << endl;
    for(int i=0; i<5; i++)
        cout << b[i] << " ";
    return 0;
}