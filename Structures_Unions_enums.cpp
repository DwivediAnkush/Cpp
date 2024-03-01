#include<iostream>
using namespace std;
struct employee // struct is the collection of multiple datatypes
{
    int Id;
    char favchar;
    float salary;
};

  union money{
    int rice;
    char car;
    float pounds;    
    };
int main(){
    struct employee ankush;
    ankush.Id=1;
    ankush.favchar='a';
    ankush.salary = 100000000000000000000000000000000;
    cout<<"the value of ankush.Id\n"<<ankush.Id<<endl;
    cout<<"the value of ankush.char\n"<<ankush.favchar<<endl;
    cout<<"the value of salary is\n "<<ankush.salary<<endl;

    union money m1; // shares memory of datatypes
    m1.rice=34;
    m1.car='c';
    cout<<m1.car<<endl;
    

    enum Meal{ breakfast, lunch,dinner}; // gives integer value
    Meal m2= breakfast;
    cout<<m2;
    return 0;
    
  
}
