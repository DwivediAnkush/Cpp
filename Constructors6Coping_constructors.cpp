#include <iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"Copy constructor called!!!!"<<endl;
        a=obj.a;
    }

    void display(){
        cout<<"The number of this object is"<<a<<endl;
    }
};

int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // copy constructor invoked
    z1.display();

    z2=z;// copy constructor not called
    z2.display();

    Number z3=z; // copy constructor invoked
    z3.display();
    // z1 should exactly resemble z or x or y
    return 0;
}