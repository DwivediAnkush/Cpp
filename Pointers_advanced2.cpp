#include <iostream>
using namespace std;

class complex{
    int real, imaginary; // by default private
    public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
    void setdata(int a ,int b){
        real =a;
        imaginary =b;
    }
};

int main(){
    complex c1;
    complex *ptr=&c1;
    (*ptr).setdata(1,34); // ptr-> setdata();
    (*ptr).getdata();// ptr-> getdata();

    return 0;
}