#include<iostream>
using namespace std;
float moneyreceived(int currentsalary, float factor = 1.04);
int main() {
int money = 100000;
cout << "If you have " << money << " in your bank account, you will receive " <<
        moneyreceived(money) << " after one year." << endl;
    
    // For VIP calculation, pass the different factor as an argument
    cout << "For VIP: If you have " << money << " in your bank account, you will receive " <<
        moneyreceived(money, 1.1) << " after one year." << endl;

    return 0;
}

float moneyreceived(int currentsalary, float factor /*= 1.04*/) {
    return currentsalary * factor;
}
/*Default arguments are a feature in programming languages that
 allow you to specify default values for function parameters.
  When a function is called, if an argument is not provided for
 a parameter with a default value, the default value is used. */