#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

#include "ItemToPurchase.h"

double TotalCost (ItemToPurchase item1, ItemToPurchase item2);

int main() {

    string itemName = "none";
    double itemPrice = 0.0;
    int itemQuantity = 0;

    ItemToPurchase item1;
    ItemToPurchase item2;

    cout << "Item 1" << endl;
    cout << "Enter the item name: ";

    getline(cin, itemName);
    item1.SetName(itemName);
    cout << endl;

    cout << "Enter the item price: ";
    cin >> itemPrice;
    item1.SetPrice(itemPrice);
    cout << endl;

    cout << "Enter the item quantity: ";
    cin >> itemQuantity;
    item1.SetQuantity(itemQuantity);
    cout << endl;

    cout << endl;

    cout << "Item 2" << endl;
    cout << "Enter the item name: ";
    cin.ignore();
    getline(cin, itemName);
    item2.SetName(itemName);
    cout << endl;

    cout << "Enter the item price: ";
    cin >> itemPrice;
    item2.SetPrice(itemPrice);
    cout << endl;

    cout << "Enter the item quantity: ";
    cin >> itemQuantity;
    item2.SetQuantity(itemQuantity);
    cout << endl;

    TotalCost(item1, item2);

    return 0;
}

double TotalCost (ItemToPurchase item1, ItemToPurchase item2) {

    string itemName;

    double totalItem1;
    double totalItem2;


    cout << "TOTAL COST" << endl;

    cout << item1.GetName() << " " << item1.GetQuantity()
         << " @ $" << fixed << setprecision(2) << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
    totalItem1 = (item1.GetPrice() * item1.GetQuantity());

    cout << item2.GetName() << " " << item2.GetQuantity()
         << " @ $" << item2.GetPrice() << fixed << setprecision(2) << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
    totalItem2 = (item2.GetPrice() * item2.GetQuantity());

    cout << endl;
    cout << "Total: $" << totalItem1 + totalItem2 << endl;

    return 0;
}

//Hello