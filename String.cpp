/* string == sequence of characters is called string.
example :- learn coding
denotes by " "
using library <string.h>

NOte :- 1) index of the string is always starts with zero
        2)The last character of string is Null
        
        C++ provide pre-defined  to manipulate strings:-
        1) strlen()  to givr the length of the string
        2) strrev()  print string in the reverse  order
        3) strcat()  to concatinate the two string
        4) strcmp()  to compare two strings
        5) strcpy()  to copy one string into another
        6) getline() string input functions
        7) push-back 
        8) pop-back*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    /*char myname[20];
    cout<<"enter your full name";
    cin>>myname;
    cout<<myname;*/   // shows ambiquotious result.
    char myname[20];
    cout<<"enter your full name";
    gets(myname);
    puts(myname);

    string myaddress;  // if we write like this then we not have use to write string.h
    cout<<"enter your full address ";
    getline(cin,myaddress); // to take input the value by user.
    cout<<myaddress;
    return 0;
}