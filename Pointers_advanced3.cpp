#include<iostream>
using namespace std;

class kirana{
    int id;
    float price;
    public:
    void setdata(int a, float b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"code of this item is"<<id<<endl;
        cout<<"price of this item is"<<price<<endl;
    }
};
int main(){
    int size = 5;
    kirana*ptr = new kirana[size];
    kirana*ptrTemp=ptr;
    int p,q;
    for(int i=0; i<size; i++){
        cout<<" enter id and price of item"<< i+1;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(int i=0 ; i< size ; i++){
        cout<<"item number"<<i+1<<endl;
        ptrTemp->getdata();
        ptr++;
    }
    return 0;

}