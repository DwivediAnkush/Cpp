#include <iostream>
using namespace std;
class Y; // just a declaration to having the presence of class Y
class X
{ // this is the private data of X we cannot access it without permission
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X,Y);
};
class Y
{ // this is the private data of Y we cannot access it without permission
    int data;

public:
    int num;
    void setvalue(int value)
    {
        num = value;
    }
};
void add(X o1, Y o2){
    cout<<"the sum of data of X and Y objects gives me"<<o1.data +o2.num;
}
int main()
{
    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setvalue(5);
    add(a1,b1);
    return 0;
}
