// To implement constructor overloading
// Author: Saransh Baniyal
// Date: 01-03-23

#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		string name;
		int rollno;
		string stream;
		string address;

	//default constructor
	Student(){
		cout << "Input Name: ";
		cin >> name;
		cout << "Input Roll Number: ";
		cin >> rollno;
		cout << "Input Stream: ";
		cin >> stream;
		cout << "Input Address: ";
		cin >> address;
	}

	//parameterized constructor
/*	Student(string n, int rno, string s, string a){
		name=n;
		rollno=rno;
		stream=s;
		address=a;
	}
*/

	//parameterized constructor with default values
	Student(string n, int rno=0, string s="\0", string a="\0"){
		name=n;
		rollno=rno;
		stream=s;
		address=a;
	}

	//copy constructor
	Student(Student &obj){
		this->name = obj.name;
		this->rollno = obj.rollno;
		this->stream = obj.stream;
		this->address = obj.address;
	}
	void updateData(string n, int rno, string s, string a){
		name=n;
		rollno=rno;
		stream=s;
		address=a;
	}
	void printData(){
		cout << "Name: " << name << endl;
		cout << "Roll Number: " << rollno << endl;
		cout << "Stream: " << stream << endl;
		cout << "Address: " << address << endl;
	}
};

int main(){
	Student ob1;
	Student ob2("Saransh", 21327, "IT", "IIIT Una, H.P.");
	ob1.printData();
	ob2.printData();
	Student ob3("DEF");
	ob3.printData();
	return 0;
}