#include <iostream>
#include <list>

int main() {
    // Declare a list of integers
    std::list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5);

    // Iterate and print elements
    std::cout << "Elements in the list: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Accessing elements by iterator
    std::cout << "Accessing elements by iterator: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Remove an element
    myList.pop_back();

    // Check if the list is empty
    if (!myList.empty()) {
        std::cout << "After popping back, elements in the list: ";
        for (const auto& element : myList) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "The list is empty." << std::endl;
    }

    return 0;
}
