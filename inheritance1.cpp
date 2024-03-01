#include<iostream>
using namespace std;

//base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpId){
        id = inpId;
        salary=34.0;
    }
    employee(){}
};
//derived class
class programmer:public employee{
    public:
    int languagecode;
    programmer(int inpId){
        id=inpId;
        languagecode = 9;
    }
     
    void getData(){
        cout<<id<<endl;
    }

};
int main(){
    employee ankush(1), dwivedi(2);
    cout<<ankush.salary<<endl;
    cout<<dwivedi.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();
    return 0;
}

/* derived class syntax :--  class{{derived class name}} : {{visibility mode}} {{base class name}}
{
    class memebers/ methods/etc.
}

1) default visibility mode is private
2) private visibility mode: public memebers of the base class becomes private members of the derived class.
3) public visibility mode: public memebers of the base class becomes public members of the derived class.
4) private members are never inherited.*/