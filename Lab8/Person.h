// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
private:
    std::string FirstName;
    std::string LastName;
    char sex;
public:
    std::string emailAdd;
    std::string cpNumber;

    Person() {}

    std::string getFirstName() const{ return FirstName;}
    std::string getLastName() const {return LastName;}
    char getSex() const {return sex;}
    std::string getEmail() const {return emailAdd;}
    std::string getCpNumber() const {return cpNumber;}

    void setFirstName(const std::string &fname) {FirstName = fname;}
    void setLastName(const std::string &lname) {LastName = lname;}
    void setSex(char s) {
        s = toupper(s);
        if (s == 'M' || s == 'F') {
            sex = s;
        } else {
            sex = '-'; // Invalid Input 
        }
    }
    void setEmail(const std::string &email) {this->emailAdd = email;}
    void setCpNumber(const std::string &cp) {this -> cpNumber = cp;}
};
#endif // PERSON_H
