#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int m1;
    int m2;

    Student(){
        name = "abc";
        m1 = 0;
        m2 = 0;
    }
    void getData(){
        cout << "Name: " << name << endl;
        cout << "M1: " << m1 << endl;
        cout << "M2: " << m2 << endl;
    }
};

int main(){
    Student ob;
    ob.getData();
    return 0;
}