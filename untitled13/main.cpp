#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

using namespace std;

std::string GetUserString(const std::string& prompt);

void AddMenuOption(ShoppingCart &itemsObjects);
void RemoveMenuOption(ShoppingCart &itemsObjects);
void ChangeMenuOption(ShoppingCart &itemsObjects);
void DescriptionsMenuOption(ShoppingCart &itemsObjects);
void CartMenuOption(ShoppingCart &itemsObjects);
void OptionsMenuOption();
void QuitMenuOption();


int main() {
    std::string customerName = GetUserString("Enter Customer's Name: ");
    std::string todayDate = GetUserString("Enter Today's Date: ");

    ShoppingCart itemsObjects(customerName, todayDate);

    std::string userMenuChoice = "none";
    bool continueMenuLoop = true;
    while (continueMenuLoop) {
        userMenuChoice = GetUserString("Enter option: ");

        if (userMenuChoice == "add") {
            AddMenuOption(itemsObjects);
        }
        else if (userMenuChoice == "remove") {
            RemoveMenuOption(itemsObjects);
        }
        else if (userMenuChoice == "change") {
            ChangeMenuOption(itemsObjects);
        }
        else if (userMenuChoice == "descriptions") {
            DescriptionsMenuOption(itemsObjects);
        }
        else if (userMenuChoice == "cart") {
            CartMenuOption(itemsObjects);
        }
        else if (userMenuChoice == "options") {
            OptionsMenuOption();
        }
        else if (userMenuChoice == "quit") {
            QuitMenuOption();
            continueMenuLoop = false;
        }
        else {
            OptionsMenuOption();
        }
    }

    return 0;
}

std::string GetUserString(const std::string& prompt) {
    std::string userAnswer = "none";

    std::cout << prompt;
    std::getline(std::cin, userAnswer);
    std::cout << std::endl;
    return userAnswer;
}

double GetUserDouble(const std::string& prompt) {
    double userAnswer = 0.0;

    std::cout << prompt;
    std::cin >> userAnswer;
    std::cin.ignore();
    std::cout << std::endl;
    return userAnswer;
}

int GetUserInt(const std::string& prompt) {
    int userAnswer = 0;

    std::cout << prompt;
    std::cin >> userAnswer;
    std::cin.ignore();
    std::cout << std::endl;
    return userAnswer;
}


void AddMenuOption(ShoppingCart &itemsObjects) {
    std::string itemName = GetUserString("Enter the item name: ");
    std::string itemDescription = GetUserString("Enter the item description: ");
    double itemPrice = GetUserDouble("Enter the item price: ");
    int itemQuantity = GetUserInt("Enter the item quantity: ");
    ItemToPurchase tempItem(itemName, itemPrice, itemDescription, itemQuantity);

    itemsObjects.AddMenuOption(tempItem);
}

void RemoveMenuOption(ShoppingCart &itemsObjects) {
    std::string nameOfItemToRemove = GetUserString("Enter name of the item to remove: ");

    itemsObjects.RemoveMenuOption(nameOfItemToRemove);
}

void ChangeMenuOption(ShoppingCart &itemsObjects) {
    std::string nameOfItemToChange = GetUserString("Enter the item name: ");
    int newItemQuantity = GetUserInt("Enter the new quantity: ");

    itemsObjects.ChangeMenuOption(newItemQuantity, nameOfItemToChange);
}

void DescriptionsMenuOption(ShoppingCart &itemsObjects) {
    itemsObjects.DescriptionsMenuOption();
}

void CartMenuOption(ShoppingCart &itemsObjects) {
    itemsObjects.CartMenuOption();
}

void OptionsMenuOption() {
    std::cout << "MENU" << std::endl
              << "add - Add item to cart" << std::endl
              << "remove - Remove item from cart" << std::endl
              << "change - Change item quantity" << std::endl
              << "descriptions - Print the items' descriptions" << std::endl
              << "cart - Print the shopping cart" << std::endl
              << "options - Print the options menu" << std::endl
              << "quit - Quit" << std::endl << std::endl;
}

void QuitMenuOption() {
    std::cout << "Goodbye." << std::endl;
}