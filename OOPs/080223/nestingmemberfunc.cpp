#include<iostream>
#include<string>
using namespace std;

class PC{
    private:
    int hdd;

    public:
    int ram;
    string processor;

    void setData(int r, int h, string p){
        ram = r;
        hdd = h;
        processor = p;
    }
    
    void memData();
    private:
    void getData(){
        cout << "Ram: " << ram << "GB" << endl;
        cout << "HDD: " << hdd << "GB" << endl;
        cout << "Processor: " << processor << endl;
    }
};

void PC:: memData(){
        getData();
    }

int main(){
    PC ob1, ob2;
    ob1.setData(8, 256, "i5");
    ob1.memData();

    
    return 0;
}