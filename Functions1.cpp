#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;

}
int main(){ // main is also a function.
    int num1,num2;
    cout<<"enter 1st number"<<endl;
    cin>>num1;
    cout<<"enter 2nd number"<<endl;
    cin>>num2;
    cout<<"sum"<<sum(num1 , num2);

    return 0;
}