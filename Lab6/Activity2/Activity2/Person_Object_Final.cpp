#include <iostream>
#include "Person.h" 
#include "Name.h"
#include <string>

int main() {
    int a;
    char g;
    string fname, lname, border(50, '=');

    std::cout << "Creating the 1st Person object (p) using the 1st Constructor" << std::endl;
    Person p;
    Name n;

    std::cout << "\nInput age: ";
    std::cin >> a;
    p.setage(a);

    std::cout << "Input gender: ";
    std::cin >> g;
    p.setgender(g);

    std::cout << "Input First Name: ";
    std::cin >> fname;
    n.setFirstName(fname);

    std::cout << "Input Last Name: ";
    std::cin >> lname;
    n.setLastName(lname);

    
    std::cout << border << std::endl << "Age = " << p.getage() << std::endl;
    std::cout << "Gender = " << p.getgender() << std::endl;
    std::cout << "First Name = " << n.getFirstName() << std::endl;
    std::cout << "Last Name = " << n.getLastName() << std::endl;
    p.generation(a);
    std::cout << border << std::endl;
    return 0;
}
