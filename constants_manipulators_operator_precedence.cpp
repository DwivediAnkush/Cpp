//changing the value of a variable
#include<iostream>
#include<iomanip>
using namespace std;
int main(){ 
    int a=34,b=90;
    char c='c';
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;
    a=56;
    b=100;
    c='4';
    cout<<"the value of  changing a is"<<a<<endl;
    cout<<"the value of chnaging b is"<<b<<endl;
    cout<<"the value of c is"<<c<<endl;
    // constants in C++
    const float ankush=45.67;  // we cannot change this ankush variable quantity if we do then it generates error.
    cout<<ankush<<endl;
    
    // manipulators
    /*endl is a manipulator*/ 
    int x=2,y=22,z=222;
    cout<<"the value of x without setw is"<<x<<endl;
    cout<<"the value of y without setw is"<<y<<endl;
    cout<<"the value of z without setw is"<<z<<endl;
    cout<<"the value of x with setw is"<<setw(6)<<x<<endl;
    cout<<"the value of y with setw is"<<setw(6)<<y<<endl;  // spacing of 6 from strating
    cout<<"the value of z with setw is"<<setw(6)<<z<<endl;
    /* operator precedence */
    int h=(((a*5)+b)-45)+87;
    cout<<h;           //take refernce with chart,  multiply and division have same precedence greator than subtraction and addition
    return 0;
}

 
   