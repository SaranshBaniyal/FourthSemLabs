#include<iostream>
using namespace std;
void printArr(int *arrptr, int n){
    cout << "Array Values are: " <<endl;
    for(int i=0; i<n; i++){
        cout << arrptr[i] << " ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArr(arr,n);
    return 0;
}