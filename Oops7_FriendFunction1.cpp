#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2); // give accessibility to use private data  of complex class
    void printNumber()
    {
        cout << "your number is" << a << " +" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{ // accessing private data of complex function
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum; // complex variables
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();
    sum = sumcomplex(c1, c2);
    sum.printNumber();
    return 0;
}

/* properties of a friend functions
1) Not in the scope a variable
2) since it is not in the scope of the class, it cannot be called from the object of that calss. c1.sumcomplex()==invalid.
3) can be invoked without the help of any object
4) usually contains the objects as arguments
5) Can be decalred inside public or private section of the class
6) It cannot access the members directly by their names and need object_name.memeber_name to access any member.*/