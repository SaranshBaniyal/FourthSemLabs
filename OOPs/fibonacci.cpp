#include <iostream>
using namespace std;
int fibbo(int n);
int main (){
    cout << fibbo(6);
    return 0;
}
int fibbo(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    
    return fibbo(n-1)+fibbo(n-2);
}