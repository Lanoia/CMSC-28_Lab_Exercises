#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include <iostream>
#include "Person.h"

class Employees: public Person{
    private:
        std::string employeeNum;
    public:
        std::string position;
        std::string position;
        std::string office;
        double salary;

        Employees(){}
        
        std::string getEmployeeNum(){
            return employeeNum;
        }
        std::string getPosition(){
            return position;
        }
        std::string getOffice(){
            return office;
        }
        double getSalary(){
            return salary;
        }
        void setEmployeeNum(std::string employeeNum){
            this->employeeNum = employeeNum;
        }
        void setPosition(std::string position){
            this->position = position;
        }
        void setOffice(std::string office){
            this->office = office;
        }
        void setSalary(double salary){
            this->salary = salary;
        }

};

#endif // EMPLOYEES_H