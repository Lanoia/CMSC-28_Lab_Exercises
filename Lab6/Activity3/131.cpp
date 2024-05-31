#include <iostream>
#include "Movie.h"
#include <string>

std::string border (60, '-');

void start(){
    std::cout << border << "\nWelcome to the Movie Database!\n" << border << std::endl;
    std::cout << "Programmed By: Borgy Lance C. Taclindo" << std::endl;
    std::cout << "\nThis program will display details about your favorite movie. \n"<< std::endl;
    std::cout << "Please enter the following details: " << std::endl;
}
void display(Movie m){
    std::cout << border << std::endl;
    std::cout << "Title: " << m.getTitle() << std::endl;
    std::cout << "Synopsis: " << m.getSynopsis() << std::endl;
    std::cout << "MPAA Rating: " << m.getMpaaRating() << std::endl;
    std::cout << "Genre: " << m.getGenre() << std::endl;
    std::cout << "Director: " << m.getDirectors() << std::endl;
    std::cout << "Actor/Actress: " << m.getActors() << std::endl;
    std::cout << border << std::endl;
}
int main(){

    std::string title, synopsis, genre, director, actor, mpaa_rating;

    Movie m;
    start();
    std::cout << "Enter the title of the movie: ";
    std::getline(std::cin, title);
    m.setTitle(title);

    std::cout << "Enter the synopsis of the movie: ";
    std::getline(std::cin, synopsis);
    m.setSynopsis(synopsis);

    std::cout << "Enter the MPAA Rating of the movie: ";
    std::getline(std::cin, mpaa_rating);
    m.setMpaaRating(mpaa_rating);

    std::cout << "Enter the genre of the movie: ";
    std::getline(std::cin, genre);
    m.setGenre(genre);

    std::cout << "Enter the Director of the movie: ";
    std::getline(std::cin, director);
    m.setDirectors(director);

    std::cout << "Enter the main Actor/Actress of the movie: ";
    std::getline(std::cin, actor);
    m.setActors(actor);
	
	display(m);
   

    return 0;
}
