#include <iostream>
using namespace std;
int main()
{

    // dynamic
    cout << "Input size of array A: ";
    int n;
    cin >> n;
    int a[n][n][n];
    cout << "Input values for array A: " << endl;
    for (int k = 0; k < n; k++)
    {
        cout << "Layer " << (k + 1) << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[k][i][j];
        }
    }

    cout << "Array A: " << endl;
    for (int k = 0; k < n; k++)
    {
        cout << "Layer " << (k + 1) << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[k][i][j] << " ";

            cout << endl;
        }
    }

    // static
    int b[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    n = 2;
    cout << endl
         << "Array B: " << endl;
    for (int k = 0; k < n; k++)
    {
        cout << "Layer " << (k + 1) << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << b[k][i][j] << " ";

            cout << endl;
        }
    }
    return 0;
}