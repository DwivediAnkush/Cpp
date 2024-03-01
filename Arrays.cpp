/*An array is a collection of items of similar type stored in contiguous memory location
sometimes, a simple variable is not anough to hold all data
we want to store 2500 students data required 2500 variables forthis task which is not feasible
*/
#include<iostream>
using namespace std;
int main(){
    int marks[4]={1,2,3,4}; // not need to [] specify value in this.
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[5]<<endl; // shows ambiquious value if value is not present in array.
    marks[2]=34; // changing the value of an array
    cout<<marks[2]<<endl;
    // print marks using loop
    for (int i=0;i<4;i++){
        cout<<"the value of marks "<<i<<"is\n"<<marks[i]<<endl;
    }
    //pointer arithmetic
    //new adddress = current address+ i*size of (data type)

    int*p=marks;
    cout<<"the value of *p is"<<*p<<endl;
    cout<<"the value of *(p+1) is"<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is"<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is"<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}