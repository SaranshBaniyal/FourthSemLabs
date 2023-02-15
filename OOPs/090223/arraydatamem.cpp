#include<iostream>
using namespace std;

class Student{
    public:
    static int studentcount;
    int marks[5];
    
    void setMark(){
        studentcount++;
        for(int i=0; i<5; i++){
            cin >> marks[i];
        }
    }
    void getMark(){
        for(int i=0; i<5; i++){
        cout << "Marks" << i+1 << " :" << marks[i] << endl;
        }
        cout << "Total Student Count: " << studentcount << endl;
    }
};
int Student :: studentcount;
int main(){
    Student ob1, ob2;

    cout << "OB1: " << endl;
    ob1.setMark();
    ob1.getMark();

    cout << "OB2: " << endl;
    ob2.setMark();
    ob2.getMark();
    return 0;
}