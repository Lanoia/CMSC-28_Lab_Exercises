
#include <iostream>
#include "Person.h"

class Movie{
    private:
        std::string Title;
        std::string Synopsis;
        std::string Genre;
        std::string MpaaRating;
        Person Director;
        Person Actor;
    public:
        Movie(){}
        Movie(std::string title, std::string synopsis, std::string genre, std::string mpaa, Person director, Person actor){
            Title = title;
            Synopsis = synopsis;
            Genre = genre;
            MpaaRating = mpaa;
            Director = director;
            Actor = actor;
        }
        
        std::string getTitle(){
            return Title;
        }
        std::string getSynopsis(){
            return Synopsis;
        }
        std::string getGenre(){
            return Genre;
        }
        std::string getMpaaRating(){
            return MpaaRating;
        }
        Person getDirector(){
            return Director;
        }
        Person getActor(){
            return Actor;
        }

        void setTitle(std::string title){
            Title = title;
        }
        void setSynopsis(std::string synopsis){
            Synopsis = synopsis;
        }
        void setGenre(std::string genre){
            Genre = genre;
        }
        void setMpaaRating(std::string mpaa){
            MpaaRating = mpaa;
        }
        void setDirector(Person director){
            Director = director;
        }
        void setActor(Person actor){
            Actor = actor;
        }
};
