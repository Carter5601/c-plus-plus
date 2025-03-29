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

string ShoppingCart::AddMenuOption(ItemToPurchase item) {
    int index;
    for (int i = 0; i < itemsObjects.size(); i++) {
        if (itemsObjects.at(i).GetName() == item.GetName()) {
            index = i;
        }
    }
    itemsObjects.push_back(item);
}

string ShoppingCart::RemoveMenuOption(string itemName) {
    int index;
    for (int i = 0; i < itemsObjects.size(); i++) {
        if (itemsObjects.at(i).GetName() == itemName) {
            index = i;
        }
    }
    itemsObjects.erase(itemsObjects.begin() + index);
}

string ShoppingCart::ChangeMenuOption(int itemQuantity) {
    int index;
    int newQuantity;
    for (int i = 0; i < itemsObjects.size(); i++) {
        if (itemsObjects.at(i).GetQuantity() == itemQuantity) {
            index = i;
        }
    }
    itemsObjects.at(index).SetQuantity(itemQuantity);
    itemsObjects.erase(itemsObjects.begin() + (index + 1));

}

string ShoppingCart::DescriptionsMenuOption() {
    /* cin.ignore();
    getline(cin, customerName);
    cout << customerName << "'s Shopping Cart";
    cin.ignore();
    getline(cin, todayDate);
    cout << todayDate << endl; */


    cout << customerName << "'s Shopping Cart";
    cout << todayDate << endl;

    cout << endl;
    cout << "Item Descriptions" << endl;
    for (int i = 0; i < itemsObjects.size(); ++i) {
        cout << itemsObjects.at(i).PrintDescription();
    }
}

string ShoppingCart::CartMenuOption() {

    cout << customerName << "'s Shopping Cart - ";
    cout << todayDate << endl;
    cout << "Number of Items: " << itemsObjects.size() << endl;

    cout << endl;
    for (int i = 0; i < itemsObjects.size(); ++i) {
        cout << itemsObjects.at(i).PrintCostItem();
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
