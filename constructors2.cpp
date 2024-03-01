#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y); // Constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

// Constructor definition
complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call to the constructor
    complex a(4, 6);
    a.printNumber();

    // Explicit call to the constructor
    complex b = complex(5, 7);
    b.printNumber();

    return 0;
}
