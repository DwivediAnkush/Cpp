#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Ankush"]=99;
    marksMap["jack"]=59;
    marksMap["rohan"]=2;

    marksMap.insert({{"Kozume's", 169.2},{"kuroo",189.2}});
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    return 0;
}