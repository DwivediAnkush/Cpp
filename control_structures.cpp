#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age babes"<<endl;
    cin>>age;
    if(age>18){
        cout<<"you can come to my party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid babes"<<endl;
    }
    else{
        cout<<"you cannot come to the party"<<endl;
    }
    return 0;
}