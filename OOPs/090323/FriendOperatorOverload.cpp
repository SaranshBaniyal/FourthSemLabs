// To implement operator overloading using friend function
// Author: Saransh Baniyal
// Date: 09-03-2023

#include<iostream>
using namespace std;

class Distance{
	int feet;
	int inches;

public:
	Distance(){
		feet = inches = 0;	
	}
	Distance(int f, int i){
		feet = f;
		inches = i;
	}
	void printData(){
		cout << "Feet: " << feet << endl;
		cout << "Inches: " << inches << endl;
	}

	friend Distance operator ++ (Distance ob);
	friend Distance operator + (Distance ob1, Distance ob2);
};


Distance operator ++ (Distance ob){
		Distance ans;	
		ans.feet=ob.feet+1;
		ans.inches=ob.inches;
		return ans;
}
Distance operator + (Distance ob1, Distance ob2){
		Distance ans;
		ans.feet = ob1.feet + ob2.feet;
		ans.inches = ob1.inches + ob2.inches;
		ans.feet = ans.feet + ans.inches/12;
		ans.inches = ans.inches%12;
		return ans;
}

int main(){
	Distance a(5,9);
	Distance b(4,8);
	Distance c;
	c = a+b;
	c.printData();
	c=++c;
	c.printData();
	return 0;
}