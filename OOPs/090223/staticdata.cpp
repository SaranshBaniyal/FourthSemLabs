#include<iostream>
using namespace std;

class Student{
    public:
    static int studentcount;
    int marks;
    
    void setMark(int m2){
        studentcount++;
        marks = m2;
    }
    void getMark(){
        cout << "Marks: " << marks << endl;
        cout << "Total Student Count: " << studentcount << endl;
    }
};
int Student :: studentcount;`
int main(){
    Student ob1, ob2;
    ob1.setMark(50);
    ob2.setMark(75);
    cout << "OB1: " << endl;
    ob1.getMark();
    cout << "OB2: " << endl;
    ob2.getMark();
    return 0;
}