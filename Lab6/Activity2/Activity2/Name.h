#include <iostream>

class Name{
    private:
        std::string FirstName;
        std::string LastName;
    public:
    Name(){}
    Name(std::string fname, std::string lname){
        FirstName = fname;
        LastName = lname;
    }    
    std::string getFirstName(){
        return FirstName;
    }
    std::string getLastName(){
        return LastName;
    }

    void setFirstName(std::string fname){
        FirstName = fname;
    }
    void setLastName(std::string lname){
        LastName = lname;
    }   
};


