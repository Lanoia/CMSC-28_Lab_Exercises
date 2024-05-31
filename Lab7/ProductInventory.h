//Programmed by: Borgy Lance C. Taclindo
//Header file for the ProductMain.cpp file. Contains the class definitions and uses inheritance.
#include <iostream>
#ifndef PRODUCTINVENTORY_H // Include guards to avoid duplication of inclusion to the main program
#define PRODUCTINVENTORY_H // Define the header file

class Product {
private:
    std::string name, brand, description, color, category, size;
    int quantity;
    double price, warranty;
public:
    Product() {}
    std::string getName() { return name; }
    std::string getBrand() { return brand; }
    std::string getDescription() { return description; }
    std::string getColor() { return color; }
    std::string getSize() { return size; }
    std::string getCategory() { return category; }
    int getQty() { return quantity; }
    double getPrice() { return price; }

    void setName(std::string name) { this->name = name; }
    void setBrand(std::string brand) { this->brand = brand; }
    void setDescription(std::string description) { this->description = description; }
    void setColor(std::string color) { this->color = color; }
    void setSize(std::string size) { this->size = size; }
    void setCategory(std::string category) { this->category = category; }
    void setQty(int quantity) { this->quantity = quantity; }
    void setPrice(double price) { this->price = price; }
};
// Clothing class inherits from Product class
class Clothing : public Product { // Inheritance
private:
    std::string material;
public:
    Clothing() {}
    std::string getMaterial() { return material; }

    void setMaterial(std::string material) { this->material = material; }
};

// Electronic class inherits from Product class
class Electronic : public Product { // Inheritance
private:
    std::string model, technical_specs;
    double warranty;
public:
    Electronic() {}
    std::string getModel() { return model; }
    std::string getTechnicalSpecs() { return technical_specs; }
    double getWarranty() { return warranty; }

    void setModel(std::string model) { this->model = model; }
    void setTechnicalSpecs(std::string technical_specs) { this->technical_specs = technical_specs; }
    void setWarranty(double warranty) { this->warranty = warranty; }
    int inMonths(double warranty) { warranty = warranty * 12; return warranty;} // Convert warranty to months
};

#endif // End of the header file
