// Super Market Billing System in C++ with File Handling and OOP
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Product {
public:
    int id;
    string name;
    float price;
    int quantity;

    void inputProduct() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Product Price: ";
        cin >> price;
        cout << "Enter Product Quantity: ";
        cin >> quantity;
    }

    void displayProduct() const {
        cout << id << "\t" << name << "\t" << price << "\t" << quantity << endl;
    }
};

void addProduct() {
    ofstream file("products.txt", ios::app);
    Product p;
    p.inputProduct();
    file << p.id << " " << p.name << " " << p.price << " " << p.quantity << endl;
    file.close();
    cout << "Product added successfully!\n";
}

void displayProducts() {
    ifstream file("products.txt");
    Product p;
    cout << "\nID\tName\tPrice\tQuantity\n";
    while (file >> p.id >> p.name >> p.price >> p.quantity) {
        p.displayProduct();
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\nSuper Market Billing System\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                displayProducts();
                break;
            case 3:
                cout << "Thank you for using the system!\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 3);
    return 0;
}

