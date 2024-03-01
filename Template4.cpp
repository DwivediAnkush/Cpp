#include <iostream>
using namespace std;

// Function template with parameters
template <typename T, int Size>
void printArray(const T (&arr)[Size]) {
    for (int i = 0; i < Size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example with integers
    int intArray[] = {1, 2, 3, 4, 5};
    printArray(intArray);

    // Example with doubles
    double doubleArray[] = {3.14, 2.718, 1.618};
    printArray(doubleArray);

    return 0;
}
