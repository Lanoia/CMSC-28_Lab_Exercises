#include <iostream>
#include "Employees.h"
#include "Person.h"
#include <string>

void program_intro(){
    std::string border(65, '*');
    std::cout << border << std::endl <<"* Programmed By: Borgy Lance C. Taclindo                        *" << std::endl;
    std::cout << "* Greetings! Welcome to the Employee Information System!        *" << std::endl;
    std::cout << "* This program allows you to input and display employee details.*" << std::endl << border << std::endl;
}

void employee_input(std::string& empnum, std::string& fname, std::string& lname, char& s, std::string& email, std::string& cpnum, std::string& pos, std::string& off, double& sal) {
    std::cout << "Enter Employee Number: ";
    std::getline(std::cin, empnum);

    std::cout << "Enter First Name: ";
    std::getline(std::cin, fname);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lname);

    std::cout << "Enter sex(M/F): ";
    std::cin >> s;
    std::cin.ignore();

    std::cout << "Enter Email Address: ";
    std::getline(std::cin, email);

    std::cout << "Enter Contact Number: ";
    std::getline(std::cin, cpnum);

    std::cout << "Enter Position: ";
    std::getline(std::cin, pos);

    std::cout << "Enter Office: ";
    std::getline(std::cin, off);

    std::cout << "Enter Salary: ";
    std::cin >> sal;

}

void setters(Employees& e_info, const std::string& empnum, const std::string& fname, const std::string& lname, char s, const std::string& email, const std::string& cpnum, const std::string& pos, const std::string& off, double sal) {

    e_info.setEmployeeNum(empnum);
    e_info.setFirstName(fname);
    e_info.setLastName(lname);
    e_info.setSex(s);
    e_info.setEmail(email);
    e_info.setCpNumber(cpnum);
    e_info.setPosition(pos);
    e_info.setOffice(off);
    e_info.setSalary(sal);
}

void display(Employees& e_info) {
    std::string border(50, '-');
    std::cout <<std::endl << border << std::endl << "\t\tEmployee Details: " << std::endl << border << std::endl;
    std::cout << "Employee Number: " << e_info.getEmployeeNum() << std::endl;
    std::cout << "Name: " << e_info.getFirstName() << " " << e_info.getLastName() << std::endl;
    std::cout << "Sex: " << e_info.getSex() << "(Invalid input)" << std::endl;
    std::cout << "Email: " << e_info.getEmail() << std::endl;
    std::cout << "Contact Number: " << e_info.getCpNumber() << std::endl;
    std::cout << "Position: " << e_info.getPosition() << std::endl;
    std::cout << "Office: " << e_info.getOffice() << std::endl;
    std::cout << "Salary: " << e_info.getSalary() << std::endl << border << std::endl;
}

int main() {
    std::string fname, lname, empnum, pos, off, email, cpnum;
    char sex;
    double sal;
    Employees e_info;

    program_intro();
    employee_input(empnum, fname, lname, sex, email, cpnum, pos, off, sal);
    setters(e_info, empnum, fname, lname, sex, email, cpnum, pos, off, sal);
    display(e_info);

    return 0;
}