#include<iostream>
using namespace std;
#include<string>

int isWeak(string pass, string dictionary[], int m){ //m is size of dictionary
    int lc=0,uc=0,d=0,sub=0;

    for (int i = 0; i < m; i++) {
        if (pass.find(dictionary[i]) != string::npos) {
            sub=1;
        }
    } 
    for(int i=0; i<pass.size(); i++){
        int ch = (char)pass.at(i);
        if(ch>=48 && ch<=57)
            d++;
        
        if(ch>=65 && ch<=90)
            uc++;

         if(ch>=97 && ch<=122)
            lc++;  
    }
    if(d==pass.size() || lc==pass.size() || uc==pass.size() || pass.size()<6 || sub==1){
        cout<<"Weak";
    }
    else
        cout<<"Strong";
    return 0;
}
int main(){
    string dictionary[] = {"coffee","coding","happy"};
    isWeak("abcacde",dictionary,3);
}