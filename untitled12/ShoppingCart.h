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
    string AddMenuOption(ItemToPurchase item);
    string RemoveMenuOption(string itemName);
    string ChangeMenuOption(int itemQuantity);
    string DescriptionsMenuOption();
    string CartMenuOption();

private:
    string customerName;
    string todayDate;
    vector<ItemToPurchase> itemsObjects;



};






#endif
