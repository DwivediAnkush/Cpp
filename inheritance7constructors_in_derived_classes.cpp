#include<iostream>
using namespace std;

/* 
Case 1:
class B: public A{
    // order of execution of constructor --> first A() then B()
};

Case 2:
class A: public B, public C{
    // order of execution of constructor --> B() then C() and A()
};

Case 3:
class A: public B, virtual public C{
    // order of execution of constructor --> C() then B() and A()
};
*/
class Base1{
    int data;
    public:
    Base1(int i){
        data = i;
        cout<<"base1 class constructor called"<< endl;
    }
    void printDataBase1(void){
        cout<<"the value of data is"<<data<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"base2 class constructor called"<< endl;
    }
    void printDataBase2(void){
        cout<<"the value of data is"<<data2<<endl;
    }
};

class derived: public Base1 , public Base2{
    int derived1, derived2;
    public:
    derived(int a, int b, int c,int d): Base1(a) , Base2(b){
        derived1 , derived2;
        derived1=c;
        derived2= d;
        cout<<" derived class constructor called"<<endl;
    }
    void printDataderived(void){
        cout<< " the value of derived1 is"<<derived1<<endl;
        cout<<" the value of derived2 is "<<derived2<< endl;
    }
};
int main(){
    derived ankush(1,2,3,4);
    ankush.printDataBase1();
    ankush.printDataBase2();
    ankush.printDataderived();
    return 0;
}