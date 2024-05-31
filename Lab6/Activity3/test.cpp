#include <iostream>
#include <string>
#include "Movie.h"

std::string border(60, '-');
std::string divider(50, '*');

void start(){
    std::cout << border << "\nWelcome to the Movie Database!\n" << border << std::endl;
    std::cout << "Programmed By: Borgy Lance C. Taclindo" << std::endl;
    std::cout << "\nThis program will display details about your favorite movie. \n"<< std::endl;
    std::cout << "Please enter the following details: " << std::endl;
}
void getInput(Movie& m, Person directors[], Person actors[], int& num_directors, int& num_actors) {
    std::string title, synopsis, genre, mpaa_rating, fname, lname;
    char gender;

    std::cout << "Enter the title of the movie: ";
    std::getline(std::cin, title);
    m.setTitle(title);

    std::cout << "Enter the synopsis of the movie: " << std::endl;
    std::getline(std::cin, synopsis);
    m.setSynopsis(synopsis);

    std::cout << "Enter the MPAA Rating of the movie: ";
    std::getline(std::cin, mpaa_rating);
    m.setMpaaRating(mpaa_rating);

    std::cout << "Enter the Genre of the movie: ";
    std::getline(std::cin, genre);
    m.setGenre(genre);

    std::cout << "Enter the number of Directors: ";
    std::cin >> num_directors;
    std::cin.ignore(); 
    std::cout << divider << std::endl;
    for (int i = 0; i < num_directors; i++) {
        std::cout << "Enter the First Name of Director " << i + 1 << ": ";
        std::getline(std::cin, fname);
        directors[i].setFirstName(fname);

        std::cout << "Enter the Last Name of Director " << i + 1 << ": ";
        std::getline(std::cin, lname);
        directors[i].setLastName(lname);

        std::cout << "Enter the Gender of Director " << i + 1 << ": ";
        std::cin >> gender;
        directors[i].setgender(gender);
        std::cin.ignore(); 
    }
    std::cout << divider << std::endl;
    std::cout << "Enter the number of Actors/Actresses: ";
    std::cin >> num_actors;
    std::cin.ignore();
    std::cout << divider << std::endl;

    for(int i = 0; i < num_actors; i++){
        std::cout << "Enter the First Name of Actor/Actress " << i + 1 << ": ";
        std::getline(std::cin, fname);
        actors[i].setFirstName(fname);

        std::cout << "Enter the Last Name of Actor/Actress " << i + 1 << ": ";
        std::getline(std::cin, lname);
        actors[i].setLastName(lname);

        std::cout << "Enter the Gender of Actor/Actress " << i + 1 << ": ";
        std::cin>> gender;
        actors[i].setgender(gender);
        std::cin.ignore();
     }
}
void display(Movie& m, Person directors[], Person actors[], int num_directors, int num_actors) {
    std::string border(60, '-');
    std::cout << border << std::endl;
    std::cout << "Title: " << m.getTitle() << std::endl;
    std::cout << "Synopsis: " << m.getSynopsis() << std::endl;
    std::cout << "MPAA Rating: " << m.getMpaaRating() << std::endl;
    std::cout << "Genre: " << m.getGenre() << std::endl;
    std::cout << "Director/s: " << std::endl;
    for (int i = 0; i < num_directors; i++) {
        std::cout << directors[i].getFirstName() << " " << directors[i].getLastName()
                  << ", " << directors[i].getgender() << std::endl;
    }
    std::cout << "Actor/s: " << std::endl;
    for(int i = 0; i < num_actors; i++){
        std::cout << actors[i].getFirstName() << " " << actors[i].getLastName()
                  << ", " << actors[i].getgender() << std::endl;
    }
    std::cout << border << std::endl;
}

int main(){
  std::string title, synopsis, genre, mpaa_rating;
  int num_directors, num_actors;

  Movie m;
  Person directors[100];
  Person actors[100];

  start();
  getInput(m, directors, actors, num_directors, num_actors);
  display(m, directors, actors, num_directors, num_actors);

 return 0;
}