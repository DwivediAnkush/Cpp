#include<iostream>
using namespace std;
int c=5;
int main() {
    int a, b, c;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum of a and b is: " << c << endl;
    cout<<"the global c is"<<::c<<endl; // :: denotes value accessing the global value.

float d=56.9;
long double e=45.045555;
cout<<"the value of d is"<<d<<endl<<"the value of e is "<<e;

// reference variables or coping the value of variables
float v=567;
float & y=v;
cout<<v<<endl;
cout<<y<<endl;

// typecasting or changing the database of the number
int oi= 34;
float m=87.0999;
cout<<"the value of oi is"<<float(oi);
cout<<"\nthe value of b is"<<int(m);

int j= int(m);
cout<<"\nthe expression is"<<oi + m;
cout<<"\nthe expression is"<<oi + int(m);
cout<<"\nthe expression is"<<oi+ (int)m;
return 0;
}
