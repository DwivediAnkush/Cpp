#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("Testing.cpp");
    out<<"This is me \n";
    out<<"This is  \n";
    out<<"This \n";
    out.close();

    ifstream in;
    string st;
    in.open("Testing.cpp");
    in>>st;
    cout<<st;
    in.close();
    return 0;
}