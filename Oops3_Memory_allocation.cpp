#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void); // set the price of an item
    void getPrice(void);// display the price of an item
};
void shop::setPrice(void)
{
    cout << "enter Id of your item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with Id" << itemId[i] << "is" << itemPrice[i] << endl;
    }
}
int main()
{
    shop dwivedi;
    dwivedi.initCounter();
    dwivedi.setPrice();
    dwivedi.setPrice();
    dwivedi.setPrice();
    dwivedi.getPrice();

    return 0;
}

