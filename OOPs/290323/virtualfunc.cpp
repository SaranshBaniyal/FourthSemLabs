// To implement virtual function
// Author: Saransh Baniyal
// Date: 29-03-23

#include<iostream>
using namespace std;

class base {
public:
	virtual void print1()
	{
		cout << "Print1 Base Class" << endl;
	}
	void print2()
	{
		cout << "Print2 Base Class" << endl;
	}
};

class derived : public base {
public:
	void print1()
	{
		cout << "Print1 Derived Class " << endl;
	}
	void print2()
	{
		cout << "Print2 Derived Class" << endl;
	}
};

int main()
{
	base *bptr1;
	derived d1;
	bptr1 = &d1;

	base *bptr2;
	derived d2;
	bptr2 = &d2;

		
	bptr1->print1();
	bptr2->print2();

	return 0;
}
