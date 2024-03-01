#include <iostream>
using namespace std;
class  employee{
    int data1, data2;
public:
    employee(int a, int b=8){
        data1=a;
        data2=b;
    }
    void printNumber();
};
void employee :: printNumber(){
    cout<<"the value of the data is "<<data1<<"and"<<data2<<endl;
}
int main(){
    employee y =  employee(4,5);
    y.printNumber();

    employee e= employee(2);
    e.printNumber();
    return 0;
}