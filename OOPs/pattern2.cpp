#include <iostream>
using namespace std;
int main() {
      int i,j,s=6,t=1;
      for(i=1;i<=4;i++){
        for(j=s;j>0;j--){
            cout << " ";
        }
        for(j=1;j<=t;j++){
            cout << "*";
        }
        cout << endl;
        s=s-2;
        t=t+2;
      }
      return 0;
}