#include <iostream>
using namespace std;
class complex
{
    int a, b, c;

public:
    // creating a constructors
    // constructors is a special memeber function with same name as of the class.It is automatically invoked(call).
    // it is used to initialize the objects of its class
    complex(void); // constructors declration
    void printNumber()
    {
        cout<<"your number is" << a << "+"<< b<<"i"<<endl;
    }
};
complex:: complex(void){
    a=10;
    b=10;
}
int main()
{
    complex c;
    c.printNumber();
    return 0;
}
/* properties of constructors
1. It should be declared in the public section of the class
2. They are automaticaly invoked whenever the object is cretaed
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/