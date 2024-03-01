#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with hout stream
    ofstream hout("Testing.cpp");
    //creating a name string and filling it with the string enetered by the user
    string name;
    cout<<"enter your name";
    cin>>name;

   //writing a string to the file 
    hout<<"my name is"+ name;
    hout.close();

    ifstream hin("Testing.cpp");
    string content;
    hin>>content;
    cout<<"the content of this file is"<<content;
    return 0;
}