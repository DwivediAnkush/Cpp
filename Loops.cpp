#include<iostream>
using namespace std;
int main(){
    // loops in Cpp
    /*there are three types of loops in cpp
    1) for loop
    2)while loop
    3) do - while loop*/

    /* for loop*/
    for(int i=0;i<100;i++){ // code for printing the number 0 to 99.
        cout<<i<<endl;
        /*syntax for for loop
        for(initialization;condition;updation){
            loop body(C++ code)
        }*/
    }
    /* while loop*/
    int j=1;
    while(j<=40) {
        cout<<j<<endl;  // priinting 1 to 40 using while loop
        j++;
    }
    /* infinite while loop
    int i= 1;
    while(true){
        cout<<1<<endl;
        i++;
    }*/

    /* do while loop*/
    int k=1;
    do{
        cout<<k<<endl;
        k++;
    }while(false);
    // code for printing table of 5 by for loop
    for(int l=5;l<=50;l+=5){
        cout<<l<<endl;
    }
    // by while loop
    int u=5;
    while(u<=50){
        u+=5;
        cout<<u<<endl;

    }
    // code for printing table of 100
    for (int po=100;po<=1000; po+=100){
        cout<<"table of 100 is"<<po<<endl;
    }

    
    

    return 0;
}