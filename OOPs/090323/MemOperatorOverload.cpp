// To implement operator overloading using member function
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
	Distance operator ++ (){
		Distance ans;	
		ans.feet=feet+1;
		ans.inches=inches;
		return ans;
	}
	Distance operator + (Distance obj){
		Distance ans;
		ans.feet = feet + obj.feet;
		ans.inches = inches + obj.inches;
		ans.feet = ans.feet + ans.inches/12;
		ans.inches = ans.inches%12;
		return ans;
	}
	void printData(){
		cout << "Feet: " << feet << endl;
		cout << "Inches: " << inches << endl;
	}
};
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