#include<iostream>
using namespace std;

int area(int l, int b){
    return l*b;
}

double area(double r){
    return 3.14*r*r;
}

int area(int s){
    return s*s;
}

int main(){
    cout << "Area of Rectangle: " << area(3,2) <<endl;
    cout << "Area of Circle: " << area(2.5) <<endl;
    cout << "Area of Square: " << area(5) <<endl;
    return 0;
}