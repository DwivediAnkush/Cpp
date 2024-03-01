#include<iostream>
using namespace std;

int main() {
    int a = 5, b = 9;
    cout << "operators in C++" << endl; // endl means simply jump a line
    cout << "following are the operators in C++" << endl;

    // arithmetic operators
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of ++a is " << ++a << endl;
    cout << "the value of --a is " << --a << endl;
    // Assignment operators --> used to assign values to variables
    // int a =3,b=9;
    //char d='d';

    // Comparison opertaors
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;

    // L:ogical operators
    cout<<"foloowing are the logical operators in C++"<<endl;
    cout<<"the value of this logical opertor is ((a==b)) && (a<b)) "<<((a==b)&&(a<b))<<endl;
    cout<<"the value of this logical or operator ((a==b))&&(a<b)) is"<<((a==b)||(a<b))<<endl;



    return 0;
}
