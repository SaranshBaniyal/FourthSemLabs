#include <iostream>
using namespace std;

int main(){
    //dynamic
    cout << "Input size of array A: ";
    int n;
    cin >> n;
    int a[n][n];
    cout << "Input values for array A: " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    }
    cout << "Array A: "<< endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }

    //static
    int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    n=3;
    cout << endl << "Array B: " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << b[i][j] << " ";

        cout << endl;
    }
    return 0;
}