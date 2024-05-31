#include <iostream>
#include <string>
using namespace std;

//Function Prototypes
void startup();
void ask_user(int&, int&, int&);
int high_Val(int, int, int);
int low_Val(int, int, int);
void output(int, int, int, int, int, int);

int main(){
    int n1, n2, n3, lowestVal, largeVal, diff;
    
    startup(); //Displays program description (specification 3)
    ask_user(n1, n2, n3); //Asks user input for 3 variables (specification 4)
    largeVal = high_Val(n1, n2, n3); //Determines highest value (specification 5)
    lowestVal = low_Val(n1, n2, n3); //Determines lowest value (specification 6)
    diff = largeVal - lowestVal; //Difference of largest and lowest value (specification 7)
    output(n1, n2, n3, largeVal, lowestVal, diff); //Displays output (specification 8)

    return 0;
}

void startup(){
    string border; 
    border.assign(50,'='); //Assigns string border with char '=' with length of 50

    //Display name, date, subject, and program description
    cout << border << "\nName: Borgy Lance C. Taclindo\nDate: 04/26/2024\nSubject: CMSC 28\nProgram: Find largest value out of three variables\n" << border << endl;
}

void ask_user(int& x, int& y, int& z){
    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Enter Third Number: ";
    cin >> z;
}

int high_Val(int x, int y, int z){
    int high;
    if(x > y) high = x;
    else high = y;

    if(z > high) high = z;
    return high;
}

int low_Val(int x, int y, int z){
    int low;
    if(x < y) low = x;
    else low = y;

    if(z < low) low = z;
    return low;
}

void output(int x, int y, int z, int high, int small, int difference){
    string border;
    border.assign(50,'=');
    
    cout << endl << "Numbers: " << x << ", " << y << ", "<< z << "\nHighest: " << high << "\nLowest: " << small << "\nDifference: " << difference << endl << border;
}
