#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"

class Student : public Person {
    private:
        std::string studentNum;
    public: 
        std::string course;
        std::string department;
        std::string college;

        Student() {}

        std::string getStudentNum() {
            return studentNum;
        }
         std::string getCourse() {
            return course;
        }

        std::string getDepartment() {
            return department;
        }
        std::string getCollege() {
            return college;
        }

        void setStudentNum(std::string studentNum) {
            this->studentNum = studentNum;
        }

        void setCourse(std::string course) {
            this->course = course;
        }

        void setDepartment(std::string department) {
            this->department = department;
        }

        void setCollege(std::string college) {
            this->college = college;
        }
};

#endif // STUDENT_H