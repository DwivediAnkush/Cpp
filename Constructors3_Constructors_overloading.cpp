#include<iostream>
using namespace std;
class complex{
    int a ,b;
    public:
    complex(int x , int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void printNumber(){
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1(5,5);
    c1.printNumber();
    complex c2(5);
    c2.printNumber();
    return 0;
}