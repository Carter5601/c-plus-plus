#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

string ShoppingCart::GetCustomerName() {
    return customerName;
}

string ShoppingCart::GetDateCreated() {
    return todayDate;
}

void ShoppingCart::AddMenuOption(ItemToPurchase item) {
    int index = -1;

    for (int i = 0; i < itemsObjects.size(); i++) {
        if (itemsObjects.at(i).GetName() == item.GetName()) {
            index = i;
        }
    }
    if (index != -1) {
        cout << "Item is already found in the cart. It will not be added." << endl;
    }
    else {
        itemsObjects.push_back(item);
    }
}

void ShoppingCart::RemoveMenuOption(string itemName) {
    int index = -1;

    for (int i = 0; i < itemsObjects.size(); i++) {
        if (itemsObjects.at(i).GetName() == itemName) {
            index = i;
            itemsObjects.erase(itemsObjects.begin() + index);
        }
    }
    if (index == -1) {
        cout << "Item not found in cart. It will not be removed." << endl;
    }
}

void ShoppingCart::ChangeMenuOption(int itemQuantity, string itemName) {
    int index = -1;

    for (int i = 0; i < itemsObjects.size(); i++) {
        if (itemsObjects.at(i).GetName() == itemName) {
            index = i;
            itemsObjects.at(index).SetQuantity(itemQuantity);
        }
    }
    if (index == -1) {
        cout << "Item not found in cart. It will not be modified." << endl;
    }
}

void ShoppingCart::DescriptionsMenuOption() {

    cout << customerName << "'s Shopping Cart - ";
    cout << todayDate << endl;

    if (itemsObjects.size() == 0) {
        cout << "Shopping cart is empty." << endl;
    }
    if (itemsObjects.size() > 0) {
        cout << endl;
        cout << "Item Descriptions" << endl;
        for (int i = 0; i < itemsObjects.size(); ++i) {
            itemsObjects.at(i).PrintDescription();
        }
    }
}

void ShoppingCart::CartMenuOption() {
    int totalQuantity;
    double totalPrice;

    cout << customerName << "'s Shopping Cart - ";
    cout << todayDate << endl;

    if (itemsObjects.size() == 0) {
        cout << "Shopping cart is empty." << endl;
    }
    if (itemsObjects.size() > 0) {
        cout << "Number of Items: ";
        totalQuantity = 0;
        for (int i = 0; i < itemsObjects.size(); ++i) {
            totalQuantity = totalQuantity + itemsObjects.at(i).GetQuantity();
        }

        cout << totalQuantity;
        cout << endl;
        cout << endl;
        for (int i = 0; i < itemsObjects.size(); ++i) {
            itemsObjects.at(i).PrintCostItem();
        }

        cout << endl;
        cout << "Total: $";
        totalPrice = 0;
        for (int i = 0; i < itemsObjects.size(); ++i) {
            totalPrice = totalPrice + (itemsObjects.at(i).GetQuantity() * itemsObjects.at(i).GetPrice());
        }

        cout << fixed << setprecision(2) << totalPrice;
        cout << endl;
        cout << endl;
    }
}


ShoppingCart::ShoppingCart() {
    customerName = "none";
    todayDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string customerName, string todayDate) {
    this->customerName = customerName;
    this->todayDate = todayDate;
}

