#include<iostream>
using namespace std;

class Student{
    public:
    int mark1;
    int mark2;
    static int studentcount;
    
    void setMark(int m1, int m2){
        studentcount++;
        mark1 = m1;
        mark2 = m2;
    }
    void getMark(){
        cout << "Mark 1: " << mark1 << endl;
        cout << "Mark 2: " << mark2 << endl;
    }
    static void getCount(){
        cout << "Total Student Count: " << studentcount << endl;
    }
};
int Student:: studentcount;
int main(){
    Student ob1, ob2;
    
    Student::getCount();
    ob1.setMark(50,80);
    cout << "OB1: " << endl;
    ob1.getMark();

    Student::getCount();
    ob2.setMark(75,90);
    cout << "OB2: " << endl;
    ob2.getMark();

    Student::getCount();

}