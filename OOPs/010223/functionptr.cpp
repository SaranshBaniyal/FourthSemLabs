#include <iostream>
using namespace std;

int multiply(int a, int b) { 
    return a * b;
    }

int main()
{
	int (*func)(int, int);
    //first int is the return type of the function in func
    //func is the name of the pointer
	func = &multiply;

	int prod = (*func)(15, 2);
    //or (both are correct)
    int prod = func(15, 2);
	cout << "The value of the product is: " << prod << endl;

	return 0;
}
