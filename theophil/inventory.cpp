#include <iostream>
#include <string>
using namespace std;

struct Product {
    int productId;
    string productName;
    int quantity;
};


//funtions
// Function to input data for a product
void inputProduct(Product& product) {
    cout << "Enter Product ID: ";
    cin >> product.productId;
    cout << "Enter Product Name: ";
    getline(cin >> ws, product.productName);
    cout << "Enter Quantity: ";
    cin >> product.quantity;
}

// Function to display inventory details
void displayInventory(Product products[], int size) {
    cout << "Inventory Details:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Product ID: " << products[i].productId << endl;
        cout << "Product Name: " << products[i].productName << endl;
        cout << "Quantity: " << products[i].quantity << endl;
    }
}
//2.2 C++ Program for Water Usage Bill Management:

#include <iostream>
#include <string>
using namespace std;

class WaterBill {
private:
    int accountNumber;
    string name;
    int unitsConsumed;
    double totalBill;

public:
    // Constructor
    WaterBill() {
        accountNumber = 0;
        name = "";
        unitsConsumed = 0;
        totalBill = 0.0;
    }

    // Function to input data
    void inputData() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    // Function to generate bill
    void generateBill() {
        if (unitsConsumed <= 150)
            totalBill = unitsConsumed * 0.50;
        else if (unitsConsumed <= 250)
            totalBill = 150 * 0.50 + (unitsConsumed - 150) * 1.50;
        else if (unitsConsumed <= 550)
            totalBill = 150 * 0.50 + 100 * 1.50 + (unitsConsumed - 250) * 2.50;
        else
            totalBill = 150 * 0.50 + 100 * 1.50 + 300 * 2.50 + (unitsConsumed - 550) * 3.00;
    }

    // Function to display bill
    void displayBill() {
        cout << "\nWater Utility Bill:\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Total Bill: P " << totalBill << endl;
    }
};

// 2.3 C++ Program for Payroll Management:

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeCode;
    string lastName;
    string firstName;
    double basicSalary;
    double netSalary;

public:
    // Function to get input
    void get() {
        cout << "Enter Employee Code: ";
        cin >> employeeCode;
        cout << "Enter Last Name: ";
        getline(cin >> ws, lastName);
        cout << "Enter First Name: ";
        getline(cin >> ws, firstName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate net salary
    void calculate() {
        double deductions = 0.20 * basicSalary + 10.0; 
        double allowances = 650.0 + 100.0; 
        netSalary = basicSalary - deductions + allowances;
    }

    // Function to display net salary
    void display() {
        cout << "\nEmployee Details:\n";
        cout << "Employee Code: " << employeeCode << endl;
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Net Salary: P " << netSalary << endl;
    }
};
