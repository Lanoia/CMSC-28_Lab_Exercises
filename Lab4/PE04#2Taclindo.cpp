#include<iostream>
using namespace std;

void startup();
void input(int&);
void convert(int);


int main(){
    int num;

    startup(); //Program header
    input(num); //Gets user input
    convert(num); //Converts decimal to binary

    return 0;
}

void startup(){
    string border; 
    border.assign(50,'='); //Assigns string border with char '=' with length of 50
    
    //Display name, date, subject, and program description
    cout << border << "\nName: Borgy Lance C. Taclindo\nDate: 04/26/2024\nSubject: CMSC 28\nProgram: Convert Decimal Integer to Binary\n" << border << endl;
}

//Asks user input
void input(int& x){
    cout << "Enter a Decimal Integer: ";
    cin >> x;
}

//Converts input to binary
void convert(int x){
    int z[50], ctr=0;
    while (x>0){ 
        z[ctr] = x%2; //Store remainder 0 or 1 in array
        x /= 2; //Divide x by 2 to update it
        ctr++;
    }
    cout <<"Binary Equivalent: ";
    for (int y = ctr-1; y>=0; y-- ){
        cout << z[y]; //Prints binary digits in correct order
    }
}

