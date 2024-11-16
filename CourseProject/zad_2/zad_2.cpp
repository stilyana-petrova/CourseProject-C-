// zad_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Item {
public:
    string name;
    int catalogNumber;
    double price;
    int quantity;
    Item(string name, int catalogNumber, double price, int quantity) {
        this->name = name;
        this->catalogNumber = catalogNumber;
        this->price = price;
        this->quantity = quantity;
    }
};
int main() {
    int numItems;
    cout << "Enter the number of items in the store: ";
    cin >> numItems;

    while (numItems < 0 || numItems > 100) {
        cout << "Invalid number of items. Please enter a number between 0 and 100: ";
        cin >> numItems;
    }
    vector<Item> items;

    for (int i = 0; i < numItems; i++) {
        string name;
        int catalogNumber;
        double unitPrice;
        int availableQuantity;
        cout << "Enter the name of item " << i + 1 << ": ";
        cin >> name;
        cout << "Enter the catalog number of item " << i + 1 << ": ";
        cin >> catalogNumber;
        cout << "Enter the unit price of item " << i + 1 << ": ";
        cin >> unitPrice;

        while (unitPrice < 0) {
            cout << "Invalid unit price. Please enter a positive number: ";
            cin >> unitPrice;
        }
        cout << "Enter the available quantity of item " << i + 1 << ": ";
        cin >> availableQuantity;

        Item item(name, catalogNumber, unitPrice, availableQuantity);
        items.push_back(item);
    }
    cout << "List of items:" << endl;
    for (Item item : items) {
        cout << "Name: " << item.name << endl;
        cout << "Catalog Number: " << item.catalogNumber << endl;
        cout << "Unit Price: " << item.price << endl;
        cout << "Available Quantity: " << item.quantity << endl;
        cout << endl;
    }
    double highestPrice = 0;
    int highestPriceIndex = -1;
    for (int i = 0; i < items.size(); i++) {
        if (items[i].price > highestPrice) {
            highestPrice = items[i].price;
            highestPriceIndex = i;
        }
    }
    cout << "Item with the highest price:" << endl;
    cout << "Name: " << items[highestPriceIndex].name << endl;
    cout << "Catalog Number: " << items[highestPriceIndex].catalogNumber << endl;
    cout << "Unit Price: " << items[highestPriceIndex].price << endl;
    cout << "Available Quantity: " << items[highestPriceIndex].quantity << endl;
    return 0;
}

