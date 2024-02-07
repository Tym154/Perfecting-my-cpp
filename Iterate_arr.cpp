#include <iostream>

int main() {

    std::string x[] = {"Bread", "Ice cream", "Mushrooms", "Pizza"}; //predetermine array values

    for(int i = 0; i < sizeof(x)/sizeof(std::string); i++){ //goes trought all element of array
        std::cout << x[i] << "\n"; //writes down element that is at position i 
    }

    //the for loop writes down all elements of an array 

    return 0;
}