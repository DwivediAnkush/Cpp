#include<iostream>
using namespace std;

class Baseclass{
    public:
    int var_base;
    void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
    }
};

class derivedclass :public Baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
        cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
    }
};


int main(){
    Baseclass*base_class_pointer;
    Baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer=&obj_derived; // pointing base class pointer to derived class

    base_class_pointer-> var_base=34;
    //base_class_pointer-> var_derived=134; // will throw error;
    base_class_pointer->display();

    base_class_pointer-> var_base=3400;
    base_class_pointer-> display();

    derivedclass*derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer-> var_derived = 900;
    derived_class_pointer-> display();
    
    return 0;
}
//polymorphism means one who have many forms. eg:- function overloading, operator overloading , virtual functions.
// types :- cpmpile term polymorphism and run time polymorphism.