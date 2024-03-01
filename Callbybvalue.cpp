/*In C++, "call by value" is a parameter passing mechanism where a 
function receives a copy of the original data, and any modifications 
made within the function do not affect the original data. Consider a 
function increment that takes an integer as a parameter:
*/
#include <iostream>
using namespace std;

void increment(int num) {
    num++; // This modifies the local copy of 'num,' not the original value.
}

int main() {
    int value = 5;
    increment(value); // Call the function with 'value' by value.
    cout << "Original value: " << value; // Output: Original value: 5
    return 0;
}
