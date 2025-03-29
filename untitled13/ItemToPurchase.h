#ifndef UNTITLED9_ITEMTOPURCHASE_H
#define UNTITLED9_ITEMTOPURCHASE_H

#include <string>
#include <iostream>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    ItemToPurchase(string itemName, double itemPrice, string itemDescription, int itemQuantity);
    void SetName(string itemName);
    string GetName();
    void SetPrice(double itemPrice);
    double GetPrice();
    void SetQuantity(int itemQuantity);
    int GetQuantity();
    void SetDescription(string itemDescription);
    string GetDescription();
    void PrintCostItem();
    void PrintDescription();

private:
    string itemName;
    string itemDescription;
    double itemPrice;
    int itemQuantity;
};

#endif
