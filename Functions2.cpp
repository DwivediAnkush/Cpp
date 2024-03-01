/* function prototype*/
#include<iostream>
using namespace std;

int sum(int a,int b); // note sum(int a , b) is not acceptable
int main(){
    int num1,num2;
    cout<<"enter 1st number"<<endl;
    cin>>num1;
    cout<<"enter 2nd number"<<endl;
    cin>>num2;
    cout<<"sum"<<sum(num1 , num2); // num 1 and num2 are actual parameters
    return 0;
    }
    int sum(int a, int b){ // a and b are formal parameters taking value of a and b respectively.
        int c=a+b;
        return c;
    }
