#include <iostream>
#include <string>
using namespace std;
int main() {
    string student[3];
    for(int i=0;i<3;i++)
        cin >> student[i];

    cout << endl;
    for(int i=0;i<3;i++)
        cout << student[i] << endl;
    return 0;
}