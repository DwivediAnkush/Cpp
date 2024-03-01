#include <iostream>
using namespace std;

/* syntax for inheriting multiple inheritance :-
class derived : visibility- mode base1, visibility-mode base2
{
    class body of class "derived"
};*/

class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};

class derived: public base1, public base2{
    public:
    void show(){
        cout<<"the value of base 1 is "<<base1int<<endl;
        cout<<"the value of base 2 is "<<base2int<<endl;
        cout<<"the sum of these values  is "<<base1int + base2int <<endl;
    }
};

int main(){
    derived ankush;
    ankush.set_base1int(25);
    ankush.set_base2int(5);
    //cout<<d.a; // not work since a is protected in both base as well as derived class
    return 0;
}

/* the inherited derived class will look something like this:
data memebers:
   base1int --> protected
   base2int-->  protected
   
member functions :
  set_base1int()--> public
  set_base2int()--> public
  set_show()--> public*/