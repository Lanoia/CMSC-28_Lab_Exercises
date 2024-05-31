#include <iostream>
#include "Jordans.h"

int main(){
    Jordans jordan1(1, "Bred", "Low");
    std::cout<<"Jordans Wishlist: " <<std::endl << std::endl;
    jordan1.display();

    return 0;
}