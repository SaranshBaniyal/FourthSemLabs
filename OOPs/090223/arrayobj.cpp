#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int avgmarks;

    void setData(string n, int avg){
        name = n;
        avgmarks = avg;
    }
    void getData(){
        cout << "Name: " << name << endl;
        cout << "Avg Marks: " << avgmarks << endl;
    }
};

int main(){
    cout << "Input n: ";
    int n;
    cin >> n;
    Student ob[n];
    for(int i=0; i<n; i++){
        string name;
        int avg;
        cout << "Input Name: ";
        cin >> name;
        cout << "Input Avg Marks: ";
        cin >> avg;
        ob[i].setData(name,avg);
    }
    for(int i=0; i<n; i++){
        ob[i].getData();
    }
    return 0;
}