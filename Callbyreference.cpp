/*In C++, "call by reference" is a parameter passing
 mechanism that allows a function to directly modify the 
 original data by passing a reference to it. For instance,
  consider a functionincrement that takes an integer reference 
  as a parameter:cpp
*/
/*void increment(int &num) {
    num++; // This directly modifies the original value passed to the function.
}

int main() {
    int value = 5;
    increment(value); // Call the function with 'value' by reference.
    cout << "Modified value: " << value; // Output: Modified value: 6
    return 0;
}
*/

 
#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
void swap(int a, int b){ //temp a  b
    int temp=a;          //4    4  5
    a=b;                 //4    5  5
    b= temp;             //4    5  4  /*call by reference*/
}
int main(){
    int a=4, b=5;
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;
    swap(b,a);  // interchange the value of digits~
   
    return 0;
}