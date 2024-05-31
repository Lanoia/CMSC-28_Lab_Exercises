// Programmed By: Borgy Lance C. Taclindo


#include <iostream>
#include "ProductInventory.h"
#include <string>

int main() {
    std::string name, brand, description, color, category, size, tech_specs, material, model;
    double price, warranty;
    int quantity;

    std::cout << "Enter product name: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter product brand: ";
    std::getline(std::cin, brand);

    std::cout << "Enter product description: ";
    std::getline(std::cin, description);

    std::cout << "Enter product color: ";
    std::getline(std::cin, color);

    std::cout << "Enter product size: ";
    std::getline(std::cin, size);

    std::cout << "Enter product price: ";
    std::cin >> price;

    std::cout << "Enter product quantity: ";
    std::cin >> quantity;
    std::cin.ignore();  

    std::cout << "Enter product category(clothing/electronics): ";
    std::getline(std::cin, category);
    for (char& c : category) {
        c = std::tolower(c);
    }

    if (category == "clothing") {
        std::cout << "Enter cloth material: ";
        std::getline(std::cin, material);

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

        std::cout << std::endl<< "Product Category: "<< c.getCategory() << std::endl;
        std::cout << "Product Name: " << c.getName() << std::endl;
        std::cout << "Product Brand: " << c.getBrand() << std::endl;
        std::cout << "Product Description: " << c.getDescription() << std::endl;
        std::cout << "Product Color: " << c.getColor() << std::endl;
        std::cout << "Product Size: " << c.getSize() << std::endl;
        std::cout << "Product Price: " << c.getPrice() << std::endl;
        std::cout << "Product Quantity: " << c.getQty() << std::endl;
        std::cout << "Product Material: " << c.getMaterial() << std::endl;

    } else if (category == "electronics") {
        std::cout << "Enter model: ";
        std::getline(std::cin, model);

        std::cout << "Enter technical specs: ";
        std::getline(std::cin, tech_specs);

        std::cout << "Enter warranty: ";
        std::cin >> warranty;

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

        std::cout << std::endl<< "Product Category: Electronics" << std::endl;
        std::cout << "Product Name: " << e.getName() << std::endl;
        std::cout << "Product Brand: " << e.getBrand() << std::endl;
        std::cout << "Product Description: " << e.getDescription() << std::endl;
        std::cout << "Product Color: " << e.getColor() << std::endl;
        std::cout << "Product Size: " << e.getSize() << std::endl;
        std::cout << "Product Price: " << e.getPrice() << std::endl;
        std::cout << "Product Quantity: " << e.getQty() << std::endl;
        std::cout << "Product Model: " << e.getModel() << std::endl;
        std::cout << "Product Technical Specs: " << e.getTechnicalSpecs() << std::endl;
        std::cout << "Product Warranty: " << e.getWarranty()<< " (" << e.inMonths(warranty) << " Months)"<< std::endl;

    } else {
        std::cout << "Invalid category" << std::endl;
    }

    return 0;
}
