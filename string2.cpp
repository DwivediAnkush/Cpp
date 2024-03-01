#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ad[]="ankush dwivedi"; // note:- also count space of the string.
    int l=strlen(ad); // find the length of the string // 14.
    cout<<l<<endl;
    cout<<"the reversal of the string is "<<strrev(ad)<<endl; // reverese order
    char ad1[20];
    cout<<"the value of ad1 is "<<strcpy(ad1,ad);
    char ad2[]="brahman ";
    cout<<"the value after adding "<<strcat(ad,ad2);
    return 0;
}