// To implement default arguments in an area function, which can calculate area of circle, square and rectangle
// Author: Saransh Baniyal
// Date: 23.02.23

#include <iostream>
using namespace std;

// To implement a function that calculates area and implements the concept of default arguments
// Input: ch is a character for choice, n1 is an integer which either takes 
double area(char ch, int n1, int n2=0){
	if(ch == 'c' || ch == 'C')
		return 3.14*n1*n1;

	if(ch == 's' || ch == 'S')
		return n1*n1;
	
	if(ch == 'r' || ch == 'R')
		return n1*n2;

	return 0;
}

int main(){
	cout << "Input: \n c for Circle \n s for Square \n r for Rectangle \nEnter your Choice: ";
	char ch;
	cin >> ch;
	switch(ch){
	case 'c':
		cout << "Input the Radius: ";
		int r;
		cin >> r;
		cout << "Area: "<< area('c',r);
		break;

	case 's':
		cout << "Input the Side: ";
		int s;
		cin >> s;
		cout << "Area: " << area('s',s);
		break;
	
	case 'r':
		cout << "Input the Length and Breadth: ";
		int l,b;
		cin >> l >> b;
		cout << "Area: " << area('r',l,b);
		break;
	
	default: 
		cout << "Invalid Choice";
	}
	return 0;
}