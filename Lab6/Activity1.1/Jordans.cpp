#include <iostream>

class Jordans{
    private:
        int Model;
        std::string Color;
        std::string Type;
    public:
        Jordans(int model, std::string color, std::string type){
            Model = model;
            Color = color;
            Type = type;
        }
        void display(){
            std::cout << "Model: " << Model << std::endl;
            std::cout << "Color: " << Color << std::endl;
            std::cout << "Type: " << Type << std::endl;
        }
};

int main(){
    Jordans jordan1(1, "Bred", "Low");
    std::cout<<"Jordans Wishlist: " <<std::endl << std::endl;
    jordan1.display();

    return 0;
}