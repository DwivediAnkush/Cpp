#include<iostream>
#include<string.h>
using namespace std;
int main(){
    /*char name[50];
    cout<<"your name is";
    gets(name);
    puts(name);
    name.push_back('a');  // show erroe because we push only string type not on char type.
    cout<<"modified value is"<<name<<endl;*/

    string myname="ankush dwivedi";
    cout<<"original value "<<myname<<endl;
    myname.push_back('b');
    cout<<"original value "<<myname<<endl;
    myname.pop_back();
    cout<<"value after poping is "<<myname;
    return 0;


}

