#include <iostream>
#include <string>
using namespace std;

class StationeryShop {
private:
    string items[50];
    double prices[50];
    int count = 0;

public:
    void addItem() {
        if (count >= 50) {
            cout << "Item list is full!" << endl;
            return;
        }
        cout << "Enter item name: ";
        cin.ignore();
        getline(cin, items[count]);

        cout << "Enter price: ";
        cin >> prices[count];
        count++;
        cout << "Item added successfully!" << endl;
    }

    void showItems() {
        if (count == 0) {
            cout << "No items available." << endl;
            return;
        }
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". " << items[i] << endl;
        }
    }
    void editPrice() {
        showItems();
        int choice;
        cout << "Select item number to edit price: ";
        cin >> choice;

        if (choice < 1 || choice > count) {
            cout << "Invalid choice!" << endl;
            return;
        }
        cout << "Enter new price: ";
        cin >> prices[choice - 1];
        cout << "Price updated successfully!" << endl;
    }

    void viewAllItems() {
        if (count == 0) {
            cout << "No items available." << endl;
            return;
        }
        for (int i = 0; i < count; i++) {
            cout << items[i] << " - Rs. " << prices[i] << endl;
        }
    }

    void generateReceipt() {
        if (count == 0) {
            cout << "No items available for purchase." << endl;
            return;
        }
        int n;
        double total = 0;

        cout << "Enter number of different items purchased: ";
        cin >> n;

        cout << endl << "----- RECEIPT -----" << endl;
        for (int i = 0; i < n; i++) {
            showItems();
            int itemNo, qty;
            cout << "Select item number: ";
            cin >> itemNo;

            cout << "Enter quantity: ";
            cin >> qty;

            double cost = prices[itemNo - 1] * qty;
            total += cost;

            cout << items[itemNo - 1] << " x " << qty
                 << " = Rs. " << cost << endl;
        }
        cout << "-------------------" << endl;
        cout << "Total Bill: Rs. " << total << endl;
    }
};

int main() {
    StationeryShop shop;
    int choice;

    do {
        cout << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Show Items" << endl;
        cout << "3. Edit Item Price" << endl;
        cout << "4. View Items with Prices" << endl;
        cout << "5. Generate Receipt" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            shop.addItem();
            break;
        case 2:
            shop.showItems();
            break;
        case 3:
            shop.editPrice();
            break;
        case 4:
            shop.viewAllItems();
            break;
        case 5:
            shop.generateReceipt();
            break;
        case 6:
            cout << "Program exited." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}