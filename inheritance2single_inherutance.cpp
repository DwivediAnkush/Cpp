#include<iostream>
using namespace std;

class Base{
    int data; // private by default and is not inherited in other class
    public :
    int Data;
    void setvalue();
    int getdata();
    int getData();
};

void Base:: setvalue(void){
    data = 10;
    Data = 20;
};
int Base:: getdata(){
    return data;
}
int Base:: getData(){
    return Data;
}

class derived : public Base{ // class is being derived
int data1;
public:
void process();
void display();

};

void derived:: process(){
    data1 = Data * getdata();
}

void derived :: display (){
    cout<<"value of data is "<<getdata()<<endl;
    cout<<"value of Data is "<<Data<<endl;
    cout<<"value of data1 is "<<data1<<endl;
}

int main(){
    derived der;
    der.setvalue();
    der.process();
    der.display();
    return 0;
}