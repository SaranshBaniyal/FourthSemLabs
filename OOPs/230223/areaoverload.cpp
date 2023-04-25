// To create and overload an area function, which can be called for different shaped figures depending upon the passed arguments
// Author: Saransh Baniyal
// Date: 23-02-23

#include <iostream>
using namespace std;

// To calculate the area of a circle
// Input: r for radius of the circle
// Output: area of circle
double area(double r){
	return 3.14*r*r;
}

// To calculate the area of a square
// Input: s for side of the square
// Output: area of square
int area(int s){
	return s*s;
}

// To calculate the area of a rectangle
// Input: l for length and b for breadth of the rectangle
// Output: area of rectangle
int area(int l, int b){
	return l*b;
}

int main(){
	cout << "Input: \n 1. Circle \n 2. Square \n 3. Rectangle \nEnter your Choice: ";
	int ch;
	cin >> ch;
	switch(ch){
	case 1:
		cout << "Input the Radius: ";
		double r;
		cin >> r;
		cout << "Area: "<< area(r);
		break;

	case 2:
		cout << "Input the Side: ";
		int s;
		cin >> s;
		cout << "Area: " << area(s);
		break;
	
	case 3:
		cout << "Input the Length and Breadth: ";
		int l,b;
		cin >> l >> b;
		cout << "Area: " << area(l,b);
		break;
	
	default: 
		cout << "Invalid Choice";
	}
	return 0;
}