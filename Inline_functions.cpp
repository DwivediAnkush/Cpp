#include<iostream>
using namespace std;/* inline functions in C++ are a performance
 optimization technique used to reduce the overhead of function 
 calls by inserting the function's code directly at the call site. 
 They are most effective for small functions and are declared using
  the inline keyword.*/
inline int product(int a,int b);
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"eneter the value of b"<<endl;
    cin>>b;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    cout<<"product"<<product(a,b)<<endl;
    return 0;
}
 int product(int a, int b){
        return a*b;

    }