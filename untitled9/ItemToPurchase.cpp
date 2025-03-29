#include <iostream>
#include <string>
using namespace std;

#include "ItemToPurchase.h"

void ItemToPurchase::SetName(string itemName) {
    cin >> itemName;
}

string ItemToPurchase::GetName(string itemName) {
    return itemName;
}

double ItemToPurchase::SetPrice(double itemPrice) {
    cin >> itemPrice;
}

double ItemToPurchase::GetPrice(double itemPrice) {
    return itemPrice;
}

int ItemToPurchase::SetQuantity(int ItemQuantity) {
    cin >> itemQuantity;
}

int ItemToPurchase::GetQuantity(int ItemQuantity) {
    return itemQuantity;
}
