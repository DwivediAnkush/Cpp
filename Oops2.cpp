// structutres have limitations in use
//1) members are public
//2)no methods
#include <iostream>
#include <string>
#include <cstdlib> // Include this for the exit() function
using namespace std;

class binary {
    string s;
public:
    void read(void);
    void chk_bin(void);
};

void binary::read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary::chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

int main() {
    binary b;
    b.read();
    b.chk_bin();
    return 0;
}
