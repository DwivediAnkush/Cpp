#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>vec1;
    int element;
    for(int i=0;i<4;i++){
        cout<<"enter an element to add to this vector";
        cin>>element;
        vec1.push_back(element);
    }
    //vec1.pop_back();  to delete the value at back of the vector.
    display(vec1);
    vector<int> :: iterator iter= vec1.begin();
    vec1.insert(iter+1,2,45); // iter +1 means kitne ke baad add krna h. 2 here kitna copy banana h 45 ka.
    display(vec1);
    return 0;
}
// note:- we must follow to the website c++.com to access all function inherited in STL.