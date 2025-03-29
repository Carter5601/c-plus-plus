#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
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

double ItemToPurchase::PrintCostItem() {
    /* cin.ignore();
    getline(cin, itemName); */
    cout << itemName << " " << itemQuantity << " @ $" << fixed << setprecision(2) << itemPrice
    << " = $" << (itemQuantity * itemPrice) << endl;
}

string ItemToPurchase::PrintDescription() {
    cout << itemName;
    cout << ": " << itemDescription << endl;
}


ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0.0;
    itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string itemName, double itemPrice, string itemDescription, int itemQuantity) {
    this->itemName = itemName;
    this->itemPrice = itemPrice;
    this->itemQuantity = itemQuantity;
    this->itemDescription = itemDescription;
}

//Hi