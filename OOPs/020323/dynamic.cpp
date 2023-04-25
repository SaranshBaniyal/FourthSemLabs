// Dynamic Memory Allocation for data members
// Author: Saransh Baniyal
// Date: 02.03.2023

#include<iostream>
using namespace std;

class Employee{
	char *name
	int *marks;		//for integer array storing marks

	Employee(char *n, int *m){
		name = n;
		marks = m;
	}
};