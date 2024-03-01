#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // here count=1000 show error

    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the id of this employee is"<<id<<" and this is employee number" <<count<<endl;
    }
};
int employee::count; // default value is 0 ,, if we want to increment value of count then we do it here only count=1000;
 

int main()
{
    employee ankush;
    // ankush.id=1;
    // ankush.count=1; not to be done because id and count are public
    ankush.setdata();
    ankush.getdata();
    return 0;
}