#include<iostream>
using namespace std;

int main() {
    int a = 6;
    int* b = &a; // & ---> address of operator and *---> Dereference operator or value of operator.
    cout << "Address of a (using pointer b): " << b << endl; // Print the address of 'a'
    
    int &y = a;
    cout << "Value of a (using reference y): " << y << endl; // Print the value of 'a'
    cout<<&a<<endl;
    cout<<*b<<endl;
    

    //pointer to pointer
    int**c=&b; // stores the adress of the pointer
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;
    cout<<"the value of address c is"<<*c<<endl;
    cout<<"the address of address value of c"<<**c<<endl;
    return 0;

}
