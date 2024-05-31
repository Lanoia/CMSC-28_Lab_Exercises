#include <iostream>
#include "Student.h"
#include <string>

void program_intro(){
    std::string border(65, '*');
    std::cout << border << std::endl <<"* Programmed By: Borgy Lance C. Taclindo                        *" << std::endl;
    std::cout << "* Greetings! Welcome to the Student Information System!         *" << std::endl;
    std::cout << "* This program allows you to input and display student details. *" << std::endl << border << std::endl;
}

void student_input(std::string& snum, std::string& fname, std::string& lname, char& s, std::string& email, std::string& cpnum, std::string& course, std::string& dep, std::string& college) {
    std::cout << "Enter Student Number: ";
    std::getline(std::cin, snum);

    std::cout << "Enter First Name: ";
    std::getline(std::cin, fname);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lname);

    std::cout << "Enter Sex(M/F): ";
    std::cin >> s;
    std::cin.ignore();

    std::cout << "Enter Email Address: ";
    std::getline(std::cin, email);

    std::cout << "Enter Contact Number: ";
    std::getline(std::cin, cpnum);

    std::cout << "Enter Course: ";
    std::getline(std::cin, course);

    std::cout << "Enter Department: ";
    std::getline(std::cin, dep);

    std::cout << "Enter College: ";
    std::getline(std::cin, college);
}

void setters(Student& s_info, const std::string& snum, const std::string& fname, const std::string& lname, char s, const std::string& email, const std::string& cpnum, const std::string& course, const std::string& dep, const std::string& college) {

    s_info.setStudentNum(snum);
    s_info.setFirstName(fname);
    s_info.setLastName(lname);
    s_info.setSex(s);
    s_info.setEmail(email);
    s_info.setCpNumber(cpnum);
    s_info.setCourse(course);
    s_info.setDepartment(dep);
    s_info.setCollege(college);
}

void display(Student& s_info) {
    std::string border(50, '-');
    std::cout <<std::endl << border << std::endl << "\t\tStudent Details: " << std::endl << border << std::endl;
    std::cout << "Student Number: " << s_info.getStudentNum() << std::endl;
    std::cout << "Name: " << s_info.getFirstName() << " " << s_info.getLastName() << std::endl;
    std::cout << "Sex: " << s_info.getSex() << std::endl;
    std::cout << "Email Address: " << s_info.getEmail() << std::endl;
    std::cout << "Contact Number: " << s_info.getCpNumber() << std::endl;
    std::cout << "Course: " << s_info.getCourse() << std::endl;
    std::cout << "Department: " << s_info.getDepartment() << std::endl;
    std::cout << "College: " << s_info.getCollege() << std::endl << border << std::endl;
    std::cout << "Hello " << s_info.getFirstName() << "! Welcome to UP Mindanao! We are pleased to inform you that you are admitted in the " << s_info.getCourse() << " program under " << s_info.getDepartment() << ", " << s_info.getCollege() << ". Your student number is " << s_info.getStudentNum() << ".";
}

int main() {
    std::string fname, lname, studentNum, course, department, college, email, cpnum;
    char sex;
    Student s_info;

    program_intro();
    student_input(studentNum, fname, lname, sex, email, cpnum, course, department, college);
    setters(s_info, studentNum, fname, lname, sex, email, cpnum, course, department, college);
    display(s_info);

    return 0;
};