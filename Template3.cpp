#include<iostream>
using namespace std;

template <class T1=int, class T2=float>
class ankush{
    public:
    T1 a;
    T2 b;
    ankush(T1 x, T2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
    }
};

int main(){
    ankush<> d(4,6.4);
    d.display();
    return 0;
}