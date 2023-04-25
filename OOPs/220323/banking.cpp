// To implement banking classes such as account, savings, fixeddiposit using inheritance
// Author: Saransh Baniyal
// Date: 22-03-2023

#include <string>
#include <iostream>
using namespace std;

class customer{
    string name;
    int dob;
    long int panno;
    string address;
    long int phno;
    saving sob;
    fixeddeposit fdob[];

    public:
    void getData(){
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Pan No.: " << panno << endl;
        cout << "Address: " << address << endl;
        cout << "Phone No.: " << phno << endl;
    }
    customer(){

    }
    void opensaving(float i, float amt, long int a, float avg){
        sob = new saving(i,amt,a,avg);
    }

};
class account{
    protected:
        float interest;
        float amount;
    public:
    account(float i, float amt){
        interest = i;
        amount = amt;
    }
};
class saving:public account{
    long int accountno;
    float avgbalance;
    public:
    saving(float i, float amt,long int a, float avg):account(i,amt){
        accountno = a;
        avgbalance = avg;
    }
};
class fixeddeposit:public account{

};