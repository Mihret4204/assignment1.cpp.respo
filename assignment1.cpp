
#include<iostream>
#include<iomanip>
//6. Define constant  by  diffrent tool
#define TAX_RATE_PREPROCESSOR 0.07 // Tax rate using preprocessor directive
const float TAX_RATE_CONST = 0.07; // Tax rate using const keyword

int main() {
    // 1. Display an Introductory Messages
    std::cout << "Welcome sir/madam\n";
    std::cout << "The purpose of This program is to help you analyze product sales and inventory .\n";
    std::cout << "Please user remember that C++ is a compiled language which means its source code is translated into machine code by a compiler before excution.\n\n";

    // 2. Declare Variables for Product Details
    std::string productName; // Product name (single word)
    int productCategory; // Product category (1 to 5)
    int initialInventory; // Initial inventory quantity
    float productPrice; // Product price per unit
    int itemsSold; // Number of items sold

    // 3. Declare Variables for Computed Values
    int newInventory; // New inventory declared as intger
    float totalSalesAmount; // Total sales amount declared as float
    std::string inventoryStatus; // Inventory status declared

    // 4. Demonstrate Different Initialization Methods just as a sample
    int sampleInventory = 100; // Direct initialization 
    float samplePrice; // Declaration
    samplePrice = 10.99f; // Assignment
    float anotherPrice{19.99}; // List initialization

    // 5. Use Type Deduction to Create Extra Helper Variables
    auto totalSalesCopy = 0.0f; // Helper variable using auto to declare total salse as float(by default from 0.0f)
    decltype(initialInventory) inventoryHelper = 50; // Helper variable using decltype to declear as inteer

    // 7. Input from the User about  Product Details

    std::cout << "Enter product name: ";
    std::cin >> productName;

    std::cout << "Enter product category (1: Electronics, 2: Groceries, 3: Clothing, 4: Stationery, 5: Miscellaneous): ";
    std::cin >> productCategory;

    std::cout << "Enter initial inventory quantity: ";
    std::cin >> initialInventory;

    std::cout << "Enter product price: ";
    std::cin >> productPrice;

    std::cout << "Enter number of items sold: ";
    std::cin >> itemsSold;

    // 8. Perform Calculations
    //Initialize new inventory
    newInventory =initialInventory;
    newInventory-=itemsSold; // Calculate new inventory using compound assignment

    totalSalesAmount = itemsSold * productPrice; // Calculate total sales amount
    

    // 9. Use a Conditional (Ternary) Operator
    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";
    
    // 10. Implement Flow Control
    if (productCategory < 1 || productCategory > 5) {
        std::cout << "Invalid category choice!" << std::endl;
        return 1; // Exit if invalid category
    }

    // Switch statement for category message
    switch (productCategory) {
        case 1: std::cout << "Category 1: Electronics" << std::endl; 
        break;
        case 2: std::cout << "Category 2: Groceries" << std::endl; 
        break;
        case 3: std::cout << "Category 3: Clothing" << std::endl; 
        break;
        case 4: std::cout << "Category 4: Stationery" << std::endl; 
        break;
        case 5: std::cout << "Category 5: Miscellaneous" << std::endl; 
        break;
    }

    // 11. Use a For Loop to Simulate Receipt Printing
    std::cout << "\nReceipt:\n";
    for (int i = 1; i <= itemsSold; ++i) {
        std::cout << "Item " << i << ": $" << std::fixed << std::setprecision(2) << productPrice << std::endl;
    }

    // 12. Output All Information
    std::cout << "\nTax Rates:\n";
    std::cout << "The tax Rate by (Preprocessor): " << TAX_RATE_PREPROCESSOR * 100 << "%" << std::endl;
    std::cout << "The tax Rate by (Const): " << TAX_RATE_CONST * 100 << "%" << std::endl;
    std::cout << "\nProduct Summary:\n";
    std::cout << "Product Name : " << productName << std::endl;
    std::cout << "Category: " << productCategory << std::endl;
    std::cout << "Initial Inventory: " << initialInventory << std::endl;
    std::cout << "Price: $" << std::fixed << std::setprecision(2) << productPrice << std::endl;
    std::cout << "products Items sold " <<itemsSold << std::endl;
    std::cout << "The New inventory " <<newInventory << std::endl;
    std::cout << "The total salse amount " <<totalSalesAmount << std::endl;
    std::cout << "Inventory status of the item is " <<inventoryStatus << std::endl;
    std::cout << "The Total sales copy " <<totalSalesCopy << std::endl;
    std::cout <<  "The Inventory Helper  " <<inventoryHelper ;


}