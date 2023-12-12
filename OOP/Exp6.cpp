#include <iostream>
#include <vector>
#include <algorithm> // For sort and find algorithms

// User-defined structure for item records
struct Item {
    int itemId;
    std::string itemName;
    double itemPrice;
};

// Function to display an item record
void displayItem(const Item& item) {
    std::cout << "Item ID: " << item.itemId << "\tItem Name: " << item.itemName << "\tItem Price: $" << item.itemPrice << "\n";
}

// Function to compare items for sorting (based on item ID)
bool compareItems(const Item& item1, const Item& item2) {
    return item1.itemId < item2.itemId;
}

int main() {
    // Vector to store item records
    std::vector<Item> itemVector;

    // Adding some sample item records to the vector
    itemVector.push_back({101, "Laptop", 899.99});
    itemVector.push_back({203, "Smartphone", 499.99});
    itemVector.push_back({152, "Headphones", 79.99});
    itemVector.push_back({305, "Tablet", 299.99});
    itemVector.push_back({124, "Camera", 599.99});

    // Displaying the unsorted item records
    std::cout << "Unsorted Item Records:\n";
    for (const auto& item : itemVector) {
        displayItem(item);
    }

    // Sorting item records based on item ID using sort algorithm
    std::sort(itemVector.begin(), itemVector.end(), compareItems);

    // Displaying the sorted item records
    std::cout << "\nSorted Item Records (based on Item ID):\n";
    for (const auto& item : itemVector) {
        displayItem(item);
    }

    // Searching for an item based on item ID using find algorithm
    int searchItemId;
    std::cout << "\nEnter Item ID to search: ";
    std::cin >> searchItemId;

    auto foundItem = std::find(itemVector.begin(), itemVector.end(), Item{searchItemId, "", 0});

    if (foundItem != itemVector.end()) {
        std::cout << "Item found!\n";
        displayItem(*foundItem);
    } else {
        std::cout << "Item not found.\n";
    }

    return 0;
}
