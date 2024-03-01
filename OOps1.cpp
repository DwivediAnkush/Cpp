/*
:-C++ language was designed with the main intetion of adding object-oriented
features to C language.
:-As the size of the program increases, readibility, maintainability and bug 
free nature of program decreaes.
:-This was the major problem with like C which relied upon functions or procedures
:-As a result, the possibility of not adressing the problem in an efective manner
was high.
:-Also, as data was almost neglected, data security was easily compromised.
:-Using classes solves this problem by modelling program as a real world 
scenario
*/
/*
Advantages of object oriented programming
:- Better code reusability using objects and inheritence.
:- Principle of data hiding helps build secure systems.
:- Multiples object can co-exist without any interference.
:- Software complexity can be easily managed.
*/
# include<iostream>
using namespace std;
class employee{
    private: int a,b,c;
    public: int d,e;
    void setData( int a1,int b1, int c1); // declaration
    void getData(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
        cout<<"the value of d is"<<d<<endl;
        cout<<"the value of e is"<<e<<endl;
    }

};
void employee:: setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee ankush;
    ankush.d=34;
    ankush.e=89;
    ankush.setData(1,2,4);
    ankush.getData();
    return 0;
}
/* by structure

#include<iostream>
using namespace std;
struct cl{
    int a,b,c,d,e;
};
int main(){
    struct cl employee;
    cout<<"the value of a is";
    cin>>employee.a;
    cout<<"the value of b is";
    cin>>employee.b;
    cout<<"the value of c is";
    cin>>employee.c;
    cout<<"the value of d is";
    cin>>employee.d;
    cout<<"the value of e is";
    cin>>employee.e;
    return 0;
}
*/