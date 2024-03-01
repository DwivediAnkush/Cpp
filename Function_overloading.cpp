#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b, int c);
int main(){
    cout<<"the sum of and 3 and 5 is"<<sum(3,6)<<endl;
    cout<<"the sum of and 3 and 5 is"<<sum(3,6,7)<<endl;
    return 0;
}
int sum(int a,int b){
    cout<<"using functions with 2 arguments"<<sum(a,b)<<endl;
    return a+b;
}
int sum(int a,int b, int c){
    cout<<"using functions with 3 arguments"<<sum(a,b,c)<<endl;
    return a+b+c;
}