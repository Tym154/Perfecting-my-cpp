#include <iostream>

int main() {

    //This is simple code to store data from user and than display it
    
    std::string Foods[5], temp; //predestine the array (there doesnt have to be number inside the brackets)
                                //i just did it to have max of 6 values

    int size = sizeof(Foods)/sizeof(Foods[0]);  //This calculates the size of array
                                                //it divides the whole size of array in bytes with the data type

    for(int i = 0; i < size; i++){ //for loop to go trought the array
        std::cout << "What food would you like (press q for quit): ";
        getline(std::cin, temp); //getline is usefull when you want to store whole input with spaces
                                 //stores input into variable temp
        if(temp == "q"){ //checks if temp is "q" (if it is it breaks the loop)
            break;
        }
        else{ //if temp doesnt equal "q"  it stores it into array
            Foods[i] = temp;
        }
    }

    std::cout << "Are those your foods? \n";

    for(std::string food : Foods){
        std::cout << food << "\n";  //writes out the input data
    }

    return 0;
}