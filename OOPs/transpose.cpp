#include <iostream>
using namespace std;
int main () {
    cout << "Input size of matrix: ";
    int n;
    cin >> n;
    int matrix[n][n];
    int transpose[n][n];
    cout << "Enter the Values of the Matrix: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
            transpose[j][i] = matrix[i][j];
        }
    }
    cout  << "Transpose of the Matrix: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout << transpose[i][j] << " ";

        cout << endl;
    }
}