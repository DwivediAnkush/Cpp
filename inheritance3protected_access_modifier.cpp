#include<iostream>
using namespace std;

class Base{
    protected: // inherited in another class but not access.
    int a;
    private:
    int b;
};
/*
for a protected member:
                       Public derivation  Priavte derivation   Protected derivation
  1) Private members    Not inherited       Not inherited         Not inherited
  2) Protected members  Protected            Private               protected
  3) Public members     Public                Private             protected
  */

class derived : public Base{ // by default private

};

int main(){
    Base b;
    derived d;
   // cout<<d.a; // shows error protected data cannot be accessed
    return 0;

}