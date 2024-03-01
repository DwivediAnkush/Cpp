#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in c++ are :
1) fstreambase
2) ifstream --> derived from fstreambase
3) ofstream --> derived from fstreambase

In order to work with files in c++, you will have to open it. Primarily, there are two ways to open a file:
1) using the constructor
2) using the member function open() of the class
*/
int main(){
    //opening files using constructors and writing it.
    string st="ankush dwivedi;";
    ofstream out("Testing.cpp"); // write operation
    out<<st;

    //opening files using constructors and reading it
    string st2;
    ifstream in("Testing.cpp"); // read operation
    in>>st2;
    cout<<st2;
    return 0;
}