#include <iostream>
#include <string>
using namespace std;

#include "ItemToPurchase.h"

void ItemToPurchase::SetName(string itemName) {
    this->itemName = itemName;
}

string ItemToPurchase::GetName() {
    return itemName;
}

void ItemToPurchase::SetPrice(double itemPrice) {
    this->itemPrice = itemPrice;
}

double ItemToPurchase::GetPrice() {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    this->itemQuantity = itemQuantity;
}

int ItemToPurchase::GetQuantity() {
    return itemQuantity;
}

void ItemToPurchase::SetDescription(string itemDescription) {
    this->itemDescription = itemDescription;
}

string ItemToPurchase::GetDescription() {
    return itemDescription;
}

double PrintCostItem(double itemPrice, int itemQuantity, string itemName) {
    cin.ignore();
    getline(cin, itemName);
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;
}

string PrintDescription(string itemName, string itemDescription) {
    cin.ignore();
    getline(cin, itemName);
    cout << itemName;
    cin.ignore();
    getline(cin, itemDescription);
    cout << ": " << itemDescription << endl;
}


ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0.0;
    itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string itemName, double itemPrice, string itemDescription, int itemQuantity) {
    itemName = "none";
    itemPrice = 0.0;
    itemQuantity = 0;
    itemDescription = "none";
}

//Hi