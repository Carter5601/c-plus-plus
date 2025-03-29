#ifndef UNTITLED12_SHOPPINGCART_H
#define UNTITLED12_SHOPPINGCART_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

class ShoppingCart {
public:
    ShoppingCart(string customerName, string todayDate);
    ShoppingCart();
    string GetCustomerName();
    string GetDateCreated();
    void AddMenuOption(ItemToPurchase item);
    void RemoveMenuOption(string itemName);
    void ChangeMenuOption(int itemQuantity, string itemName);
    void DescriptionsMenuOption();
    void CartMenuOption();

private:
    string customerName;
    string todayDate;
    vector<ItemToPurchase> itemsObjects;
};

#endif
