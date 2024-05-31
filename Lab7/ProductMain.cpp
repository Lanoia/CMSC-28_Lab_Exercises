// Programmed By: Borgy Lance C. Taclindo
//  N-1L
// Program Description: This program is an inventory system that allows the user to input and display product details. It supports two categories: clothing and electronics. For clothing, the user can input the material. For electronics, the user can input the model, technical specs, and warranty. The program creates objects of the Clothing or Electronic class, sets their attributes, and displays the details.

#include <iostream>
#include "ProductInventory.h" // Include the header file for the ProductInventory class
#include <string>
#include <iomanip>

int main() {
    std::string name, brand, description, color, category, size, tech_specs, material, model;
    double price, warranty;
    int quantity;
    // Get the product details from the user
    std::cout << "Enter Product Name: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter Product Brand: ";
    std::getline(std::cin, brand);

    std::cout << "Enter Product Description: ";
    std::getline(std::cin, description);

    std::cout << "Enter Product Color: ";
    std::getline(std::cin, color);

    std::cout << "Enter Product Size: ";
    std::getline(std::cin, size);

    std::cout << "Enter Product Price(Php): ";
    std::cin >> price;
    while(price <= 0) { // validate price
        std::cout << "Enter Product Price(Php): ";
        std::cin >> price;
        if (price <= 0) {
            std::cout << "Invalid Price!" << std::endl;
        }
    }
    std::cout << "Enter Product Quantity: ";
    std::cin >> quantity;
    while(quantity <= 0) { // validate quantity
        std::cout << "Invalid Quantity!" << std::endl;
        std::cout << "Enter Product Quantity: ";
        std::cin >> quantity;
    }
    
    std::cin.ignore(); // ignore the newline character
    std::cout << "Enter Product Category(clothing/electronics): ";
    std::getline(std::cin, category);
    // Convert the category to lowercase
    for (char& c : category) {
        c = std::tolower(c);
    // Check if the category is "clothing"
    if (category == "clothing") {
        // Get the material
        std::cout << "Enter cloth material: ";
        std::getline(std::cin, material);

        // Create a Clothing object and set its attributes
        Clothing c;
        c.setName(name);
        c.setBrand(brand);
        c.setDescription(description);
        c.setColor(color);
        c.setSize(size);
        c.setPrice(price);
        c.setQty(quantity);
        c.setCategory(category);
        c.setMaterial(material);

        // Print the details of the Clothing object
        std::cout << std::endl<< "Product Category: "<< c.getCategory() << std::endl;
        std::cout << "Product Name: " << c.getName() << std::endl;
        std::cout << "Product Brand: " << c.getBrand() << std::endl;
        std::cout << "Product Description: " << c.getDescription() << std::endl;
        std::cout << "Product Color: " << c.getColor() << std::endl;
        std::cout << "Product Size: " << c.getSize() << std::endl;
        std::cout << "Product Price: " << std::setprecision(2) << std::fixed << c.getPrice() << std::endl;
        std::cout << "Product Quantity: " << c.getQty() << std::endl;
        std::cout << "Product Material: " << c.getMaterial() << std::endl;

    } 
    // Check if the category is "electronics"
    else if (category == "electronics") {
        // Get the model, technical specs, and warranty
        std::cout << "Enter model: ";
        std::getline(std::cin, model);

        std::cout << "Enter technical specs: ";
        std::getline(std::cin, tech_specs);

        std::cout << "Enter warranty: ";
        std::cin >> warranty;
        // Create an Electronic object and set its attributes
        Electronic e;
        e.setName(name);
        e.setBrand(brand);
        e.setDescription(description);
        e.setColor(color);
        e.setSize(size);
        e.setPrice(price);
        e.setQty(quantity);
        e.setCategory(category);
        e.setModel(model);
        e.setTechnicalSpecs(tech_specs);
        e.setWarranty(warranty);
        // Print the details of the Electronic object
        std::cout << std::endl<< "Product Category: Electronics" << std::endl;
        std::cout << "Product Name: " << e.getName() << std::endl;
        std::cout << "Product Brand: " << e.getBrand() << std::endl;
        std::cout << "Product Description: " << e.getDescription() << std::endl;
        std::cout << "Product Color: " << e.getColor() << std::endl;
        std::cout << "Product Size: " << e.getSize() << std::endl;
        std::cout << "Product Price: " << std::setprecision(2) << std::fixed << e.getPrice() << std::endl;
        std::cout << "Product Quantity: " << e.getQty() << std::endl;
        std::cout << "Product Model: " << e.getModel() << std::endl;
        std::cout << "Product Technical Specs: " << e.getTechnicalSpecs() << std::endl;
        std::cout << "Product Warranty: " << e.getWarranty()<< " (" << e.inMonths(warranty) << " Months)"<< std::endl;
    } 
    // If the category is neither "clothing" nor "electronics"
    else {
        std::cout << "Category does not exist in the Inventory." << std::endl;
    }
    return 0;
}
}