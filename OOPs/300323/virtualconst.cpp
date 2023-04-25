// To implement and check if a constructor can be made virtual
// Author: Saransh Baniyal
// Date: 30-03-23

#include<iostream>
using namespace std;
class b {
   public:
      virtual b() {
         cout<<"Constructing base \n";
      }
      ~b() {
         cout<<"Destructing base \n";
      }
};
class d: public b {
   public:
      d() {
         cout<<"Constructing derived \n";
      }
      ~d() {
         cout<<"Destructing derived \n";
      }
};
int main(void) {
   d *derived = new d();
   b *bptr = derived;
   delete bptr;
   return 0;
}

//constructors cant be virtual
//reason?
//find the correct reason

//constructor is use to allocate memory

//find the correct reason