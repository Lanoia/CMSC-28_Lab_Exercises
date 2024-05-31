#include <iostream>
#include <iomanip>
#include <cmath>

void ask_input(int x[]){
    std::cout<<"Programming Exercise 05\nSubmitted by: Borgy Lance C. Taclindo\n";
    std::cout<<"\nThis program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers.\n\n";
    //Stores each user input in an array
    for (int y=0; y<10; y++){
        std::cout<<"Input an Integer: ";
        std::cin>> x[y];
        if (x[y]==0){ //loop stops when user inputs 0
            break;
        }
    }
}
void display_output(int l, int s, float a, float sd, float v){
    std::cout << std::endl << "Largest = " << l;
    std::cout << std::endl << "Smallest = " << s;
    std::cout << std::endl << "Average = " << a;
    std::cout << std::endl << std::fixed << std::setprecision(2)<< "Standard deviation = " << sd;
    std::cout << std::endl << std::fixed << std::setprecision(2) << "Variance = " << v;
}
int largest_num(int x[]){
    int j = x[0]; //initialize j to the first element of the array
    for (int i = 1; i < 10; i++){ //loops through array starting from second element
        if (x[i] > j){ //current element is greater than j, update j
            j = x[i]; 
        }
        if (x[i]==0){ //stops loop if current element is 0
            break;
        }
    }
    return j; //returns largest number
}
int smallest_num(int x[]){
    int j = x[0]; 
    for (int i = 1; i < 10; i++){ 
        if (x[i]==0){//loop stops if current element is 0
            break;
        }
        if (x[i] < j){ //If current element is less than j, update j
            j = x[i]; 
        }
    }
    return j; //return smallest number
}
float get_average(int x[]){
    int size=0;
    float sum=0.0;
    for (int y = 0; y<10; y++){
        sum += x[y]; //adds each elements in the array
        size++; //determines number of elements in the array
        if(x[y]==0){ //loop stops when 0 is encountered
            break;
        }
    }
    return sum/size; //returns average
}
float get_standard_dev(int x[]){
    int size=0; 
    float average=0.0, sum=0, diff[10], total_summation=0, standard_dev=0.0, result=0.0;
    
    for (int y =0; y<10; y++){
        size++; //increment size for each non-zero element
        if(x[y]==0){ //loop stops when 0 is encountered
            break;
        }
        sum += x[y]; //add current element to the sum
    }
    
    average = sum/size;
    
    for(int y=0; y<size; y++){
        diff[y] = x[y]-average; //calculate difference from the average
        total_summation += diff[y] * diff[y]; //add squared difference to total summation
    }
    
    result = total_summation/size; //calculate the mean of the squared differences
    standard_dev = sqrt(result); //calculate the standard deviation using the square root of the mean

    return standard_dev; //return calculated standard deviation
}
float get_variance(int x[]){
    int size=0; //increment size for each non-zero element
    float average=0.0, sum=0, diff[10], total_summation=0, standard_dev=0.0, result=0.0;
    for (int y =0; y<10; y++){
        size++;
        if(x[y]==0){ //loop stops when 0 is encountered
            break;
        }
        sum += x[y]; //add current element to the sum
    }
    average = sum/size;
    
    for(int y=0; y<size; y++){
        diff[y] = x[y]-average; //calculate difference from the average
        total_summation += diff[y] * diff[y]; //add squared difference to total summation
    }

    return total_summation/size; //returns calculated variance
}

int main(){
    int num[10], largest=0, smallest=0;
    float average=0.0, standard_dev=0.0, variance=0.0;

    //asks integer from user
    ask_input(num); 
    //calculate for statistics
    largest = largest_num(num);
    smallest = smallest_num(num);
    average = get_average(num);
    standard_dev = get_standard_dev(num);
    variance = get_variance(num);
    //displays the output
    display_output(largest, smallest, average, standard_dev, variance);
    
    return 0;
}