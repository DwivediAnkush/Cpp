#include<iostream>
using namespace std;
int fact(int n);
int main(){
    /*factorial of a number
    6!=6*5*4*3*2*1
    0!=1
    1!=1
    n!=n*(n-1)!*/
    int n;
    cout<<" enter a number"<<endl;
    cin>>n;
    
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = fact(n);
        cout << "The factorial of " << n << " is: " << result << endl;
    }


    return 0;
}
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

   // do yourself by for and while loop.

 /* # include<iostream>
using namespace std;
int main(){
int n , result=1;
cout<<"enter a number ";
cin>>n;
for(int i=1; i<=n;i++){
    result*=i;
    };
cout<<"the factorial of "<<n<<"is"<<result<<endl;
return 0;
}

    }*/

/*
#include<iostream>
using namespace std;
int main(){
    int n,i=1,result=1;
    cout<<"enter a number";
    cin>>n;
    while( i<=n){
        result*=i;
        i++;
  
    };
    cout<<result;
}
*/