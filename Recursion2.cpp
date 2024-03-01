// fibonnnaci numbers
//1,1,2,3,5,8,13,21..............
#include<iostream>
using namespace std;
int fib(int n);
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>> n;
    cout<<"the term is fibonnnaci sequence at position"<<n<<"is"<<fib(n)
    <<endl;

    return 0;
}
int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}