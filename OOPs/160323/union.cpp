// To overload + operator to perform, Union operation
// Author: Saransh Baniyal
// Date: 16-03-23

#include <iostream>
using namespace std;

class arrSet{
	int *arr;
	int size;

	public:
		arrSet(int *a, int s){
			arr = a;
			size = s;
		}
		arrSet(arrSet& ob){
			arr = ob.arr;
			size = ob.size;
		}
		arrSet(){
			cout<<"Input the size of array: "<<endl;
			cin>>size;
			cout<<"Input the elements of the array: "<<endl;
			arr = new int[size];
			for(int i=0; i<size; i++)
				cin>>arr[i];
		}
		void removeTrash(){
			for(int i=0; i<size; i++){
				if(arr[i]==-1){
					if(i==size-1){
						size=size-1;
					}
					else{
						for(int j=i+1; j<size; j++){
							arr[j-1]=arr[j];
						}
						size=size-1;
					}
				}
			}
		}
		void printData(){
			for(int i=0; i<size; i++)
				cout<<arr[i]<<" ";
			
			cout<<endl;
		}
		arrSet operator + (arrSet ob){
			int s = size + ob.size;
			int a[s];
			int i=0,j=0,flag=0,c=0;
			for(i=0; i<size; i++){ // copying all elements of array1
				a[c]=arr[i];
				c++;
			}

			/*for(i=0; i<ob.size; i++){ //checking and copying elements of array2 that are not in array1
				flag=0;
				for(j=0; j<size; j++){
					if(ob.arr[i]==arr[j]){
						flag=1;
						break;
					}
				}
				if(flag!=1)
					a[c]=ob.arr[i];
			}*/





			/*for(i=0; i<ob.size; i++){
				a[j]=ob.arr[i];
				j++;
			}
			
			for(i=0; i<s; i++){
				for(j=i+1; j<s-1; j++){
					if(a[i]==a[j])
						a[j]=-1;
					
				}
			}*/



			s=c;
			arrSet ans(a,s);
			return ans;
		}
};

int main(){
	/*int a[] = {1,2,-1,3,-1};
	arrSet ob(a,5);
	ob.printData();
	ob.removeTrash();
	ob.printData();*/
	
	int a1[] = {1,2,3,4};
	int a2[] = {3,4,5,6};
	arrSet ob1(a1,4);
	arrSet ob2(a2,4);
	arrSet ob3 = ob1+ob2;
	ob1.printData();
	ob2.printData();
	ob3.printData();
	cout<<endl;
	//cout<<ob3.arr[0];
	return 0;
}