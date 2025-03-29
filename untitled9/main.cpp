#include <iostream>
#include <cmath>
using namespace std;

#include "ItemToPurchase.h"

double TotalCost (double itemPrice, int itemQuantity);

int main() {

    string itemName = "none";
    double itemPrice = 0.0;
    int itemQuantity = 0;

    ItemToPurchase item1;
    ItemToPurchase item2;

    cout << "Item 1" << endl;
    item1.SetName(itemName);
    cout << "Enter the item name: " << item1.GetName(itemName) << endl;
    item1.SetPrice(itemPrice);
    cout << "Enter the item price: " << item1.GetPrice(itemPrice) << endl;
    item1.SetQuantity(itemQuantity);
    cout << "Enter the item quantity: " << item1.GetQuantity(itemQuantity) << endl;

    cout << endl;

    cout << "Item 2" << endl;
    item2.SetName(itemName);
    cout << "Enter the item name: " << item2.GetName(itemName);
    item2.SetPrice(itemPrice);
    cout << "Enter the item price: " << item2.GetPrice(itemPrice);
    item2.SetQuantity(itemQuantity);
    cout << "Enter the item quantity: " << item2.GetQuantity(itemQuantity);

    TotalCost(itemPrice, itemQuantity);

}

 double TotalCost (double itemPrice, int itemQuantity) {

     string itemName;
     double totalItem1;
     double totalItem2;

     ItemToPurchase item1;
     ItemToPurchase item2;

     cout << "TOTAL COST";

     cout << item1.GetName(itemName) << " " << item1.GetQuantity(itemQuantity)
     << " @ $" << item1.GetPrice(itemPrice) << " = $" << (itemPrice * itemQuantity) << endl;
     totalItem1 = (itemPrice * itemQuantity);

     cout << item2.GetName(itemName) << " " << item2.GetQuantity(itemQuantity)
          << " @ $" << item2.GetPrice(itemPrice) << " = $" << (itemPrice * itemQuantity) << endl;
     totalItem2 = (itemPrice * itemQuantity);

     cout << endl;
     cout << "Total: $" << totalItem1 + totalItem2 << endl;
}