#ifndef UNTITLED9_ITEMTOPURCHASE_H
#define UNTITLED9_ITEMTOPURCHASE_H

#include <string>
#include <iostream>
using namespace std;

class ItemToPurchase {
    public:
        ItemToPurchase();
        void SetName(string itemName);
        string GetName(string itemName);
        double SetPrice(double itemPrice);
        double GetPrice(double itemPrice);
        int SetQuantity(int itemQuantity);
        int GetQuantity(int itemQuantity);

    private:
        string itemName;
        double itemPrice;
    int itemQuantity;
};

ItemToPurchase::ItemToPurchase() {
    string itemName = "none";
    double itemPrice = 0.0;
    int itemQuantity = 0;
}

#endif

