#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int m1;
    int m2;

    Student(const Student &obj){
        this->name = obj.name;
        this->m1 = obj.m1;
        this->m2 = obj.m2;
    }
    Student(string n, int m1, int m2){
        this->name = n;
        this->m1 = m1;
        this->m2 = m2;
    }
    void getData(){
        cout << "Name: " << name << endl;
        cout << "M1: " << m1 << endl;
        cout << "M2: " << m2 << endl;
    }
};

int main(){
    Student ob("XYZ",54,78);
    ob.getData();
    Student ob2(ob);
    ob2.getData();
    return 0;
}