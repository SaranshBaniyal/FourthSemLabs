#include<iostream>
using namespace std;
 
 class AddGroup{
    public:
        int a, b;

        AddGroup(int x=0, int y=0){
            a = x;
            b = y;
        }

        AddGroup operator+ (AddGroup obj){
            AddGroup ans;
            ans.a = this->a + obj.a;
            ans.b = this->b + obj.b;
            return ans;
        }

        void print(){
            cout << "a: " << this->a <<endl;
            cout << "b: " << this->b <<endl;
        }

 };

 int main(){
            AddGroup obj1(5,3), obj2(2,6);
            AddGroup ans = obj1+obj2;
            ans.print();
        }