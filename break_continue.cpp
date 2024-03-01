#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<4;i++){
        cout<<i<<endl;
        if(i==2){
            break;        /* exit the loop*/
        }
    }
    for(int j=0; j<10; j++){
        cout<<j<<endl;
        if(j==2){
            continue; /* 2 ko chood kr sab print karo*/
        }
    }
    return 0;
}