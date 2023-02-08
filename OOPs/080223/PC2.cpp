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
    void getData(){
        cout << "Ram: " << ram << "GB" << endl;
        cout << "HDD: " << hdd << "GB" << endl;
        cout << "Processor: " << processor << endl;
    }
    void updateData(int r, int h, string p);
};

void PC:: updateData(int r, int h, string p){
        ram = r;
        hdd = h;
        processor = p;
    }

int main(){
    PC ob1, ob2;
    ob1.setData(8, 256, "i5");
    ob2.setData(16, 512, "i7");
    ob1.getData();
    ob2.getData();

    ob1.updateData(32, 1024, "i9");
    ob1.getData();
    return 0;
}